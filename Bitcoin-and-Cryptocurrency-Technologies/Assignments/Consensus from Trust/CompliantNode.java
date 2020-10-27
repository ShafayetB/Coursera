import java.util.HashSet;
import java.util.Set;

import static java.util.stream.Collectors.toSet;

/* CompliantNode refers to a node that follows the rules (not malicious)*/
public class CompliantNode implements Node {

    private final Double graph;
    private final Double malicious;
    private final Double txDistribution;
    private final Integer numRounds;
    private Set<Transaction> pendingTransactions;
    private boolean[] followees;
    private Set<Integer> blackList;

    public CompliantNode(double p_graph, double p_malicious, double p_txDistribution, int numRounds) {
        this.graph = p_graph;
        this.malicious = p_malicious;
        this.txDistribution = p_txDistribution;
        this.numRounds = numRounds;
    }

    public void setFollowees(boolean[] followees) {
        this.followees = followees;
        this.blackList = new HashSet<>(followees.length);
    }

    public void setPendingTransaction(Set<Transaction> pendingTransactions) {
        this.pendingTransactions = pendingTransactions;
    }

    public Set<Transaction> sendToFollowers() {
        return new HashSet<>(pendingTransactions);
    }

    public void receiveFromFollowees(final Set<Candidate> candidates) {
        final Set<Integer> senders = candidates.stream().map(candidate -> candidate.sender).collect(toSet());
        for (int i = 0; i < this.followees.length; i++) {
            if (this.followees[i] && !senders.contains(i))
                this.blackList.add(i);
        }
        this.pendingTransactions = candidates.stream()
                .filter(candidate -> !this.blackList.contains(candidate.sender))
                .map(candidate -> candidate.tx)
                .collect(toSet());
    }
}
