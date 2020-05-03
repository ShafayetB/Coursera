<!DOCTYPE html>
<!-- saved from url=(0256)https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20'Catch%20the%20Pink%20Flamingo' -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-FG+rXqMOivrAjdEQE7tO4BwM1poGmg70hJFTlNSxjX87grtrZ6UnPR8NkzwUHlQEGviu9XuRYeO8zH9YwvZhdg==" rel="stylesheet" href="./Assignment_files/frameworks-146fab5ea30e8afac08dd11013bb4ee0.css">
  
    <link crossorigin="anonymous" media="all" integrity="sha512-xhEwXUnAQrwtzx3SUeDRw7/d7lQmtwNKXic7VeJinUexaePJ2knNKoM3SJzmSmDq/Stn081QrAsZJ8UU98Rw0w==" rel="stylesheet" href="./Assignment_files/github-c611305d49c042bc2dcf1dd251e0d1c3.css">
    
    
    
    


  <meta name="viewport" content="width=device-width">
  
  <title>University-of-California-San-Diego-Big-Data-Specialization/02 - Big Data Modelling and Management Systems/Assignment - Designing a Data Model for 'Catch the Pink Flamingo' at master · AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization</title>
    <meta name="description" content="Repository for the Big Data Specialization from University of California San Diego on Coursera - AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">
    <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    <meta name="twitter:image:src" content="https://avatars1.githubusercontent.com/u/13152962?s=400&amp;v=4"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary"><meta name="twitter:title" content="AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><meta name="twitter:description" content="Repository for the Big Data Specialization from University of California San Diego on Coursera - AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">
    <meta property="og:image" content="https://avatars1.githubusercontent.com/u/13152962?s=400&amp;v=4"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><meta property="og:url" content="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><meta property="og:description" content="Repository for the Big Data Specialization from University of California San Diego on Coursera - AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">

  <link rel="assets" href="https://github.githubassets.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6NTI5NTc0NjgxOmE3MzAzN2MwZmJkYWZiYTRlZjU2YmJlNmNkMDIxNDcxNzhkOTNkN2RhZDcwZTI2ZTFhOTg5NTczYmUwYzI1MjA=--46d1fc17f3b3070746ce8f9ea08a8b6b100389bc">
  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

  



  

  

  

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

<meta name="octolytics-host" content="collector.githubapp.com"><meta name="octolytics-app-id" content="github"><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event"><meta name="octolytics-dimension-ga_id" content="1820474571.1550150318" class="js-octo-ga-id"><meta name="octolytics-actor-id" content="52629233"><meta name="octolytics-actor-login" content="ShafayetB"><meta name="octolytics-actor-hash" content="557b48fdfc3670197e2fb0e0352542d71a21b7720cd57f1a034f7e4922d3cb5c">




    <meta name="google-analytics" content="UA-3769691-2">

  <meta class="js-ga-set" name="userId" content="8362b0c6a883b45cdd4b36d0bd09375e">

<meta class="js-ga-set" name="dimension1" content="Logged In">



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="ShafayetB">

      <meta name="expected-hostname" content="github.com">

      <meta name="js-proxy-site-detection-payload" content="ZDlhMGE0ZDU2ZDBhNDZkYjQyMGE2MmVhNTNiNjRiODliNWUzNzM2MWRmNGRhYTBmOTM5ZmU4OWQwMGMyZmQwMXx7InJlbW90ZV9hZGRyZXNzIjoiMTAzLjU4Ljc0LjEwMiIsInJlcXVlc3RfaWQiOiJEMkNBOjA4QjE6NzUwRTI4OjlEQ0QzODo1RUFFREI5MyIsInRpbWVzdGFtcCI6MTU4ODUxNzc4MCwiaG9zdCI6ImdpdGh1Yi5jb20ifQ==">

    <meta name="enabled-features" content="MARKETPLACE_TRENDING_SOCIAL_PROOF,MARKETPLACE_RECOMMENDATIONS,MARKETPLACE_PENDING_INSTALLATIONS,GHE_CLOUD_TRIAL,PAGE_STALE_CHECK">

  <meta http-equiv="x-pjax-version" content="c4225fc3c5010019067425065faf9eb2">
  

      <link href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commits/master.atom" rel="alternate" title="Recent Commits to University-of-California-San-Diego-Big-Data-Specialization:master" type="application/atom+xml">

  <meta name="go-import" content="github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization git https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization.git">

  <meta name="octolytics-dimension-user_id" content="13152962"><meta name="octolytics-dimension-user_login" content="AlessandroCorradini"><meta name="octolytics-dimension-repository_id" content="183026431"><meta name="octolytics-dimension-repository_nwo" content="AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="183026431"><meta name="octolytics-dimension-repository_network_root_nwo" content="AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="false">


    


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon.svg">

<meta name="theme-color" content="#1e2327">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  <meta name="selected-link" value="repo_source" data-pjax-transient=""><meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/files/disambiguate" data-pjax-transient=""><meta name="request-id" content="D309:8CF8:A1BCB6:DAF0B2:5EAEDE50" data-pjax-transient=""><meta name="html-safe-nonce" content="9511fdeef2d3e6b1c146e4e01e24e7e60c322be0" data-pjax-transient=""><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9BbGVzc2FuZHJvQ29ycmFkaW5pL1VuaXZlcnNpdHktb2YtQ2FsaWZvcm5pYS1TYW4tRGllZ28tQmlnLURhdGEtU3BlY2lhbGl6YXRpb24vdHJlZS9tYXN0ZXIvMDIlMjAtJTIwQmlnJTIwRGF0YSUyME1vZGVsbGluZyUyMGFuZCUyME1hbmFnZW1lbnQlMjBTeXN0ZW1zIiwicmVxdWVzdF9pZCI6IkQzMDk6OENGODpBMUJDQjY6REFGMEIyOjVFQUVERTUwIiwidmlzaXRvcl9pZCI6IjM4NzI2NTkyODY2NDE2OTk1MDIiLCJyZWdpb25fZWRnZSI6InNlYSIsInJlZ2lvbl9yZW5kZXIiOiJpYWQifQ==" data-pjax-transient=""><meta name="visitor-hmac" content="3c1a3a2b55d26f94ec9017ddc1b38af4b8bb7fd43da59fdb99ed7510ed798b97" data-pjax-transient=""><meta name="github-keyboard-shortcuts" content="repository,source-code" data-pjax-transient=""><link rel="canonical" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" data-pjax-transient=""><link href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commits/master.atom" rel="alternate" title="Recent Commits to University-of-California-San-Diego-Big-Data-Specialization:master" type="application/atom+xml" data-pjax-transient=""></head>

  <body class="logged-in env-production min-width-lg intent-mouse">
    

    <div class="position-relative js-header-wrapper ">
      <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;#start-of-content" class="p-3 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
      <span class="Progress progress-pjax-loader position-fixed width-full js-pjax-loader-bar">
        <span class="progress-pjax-loader-bar top-0 left-0" style="width: 100%; transition: width 0.4s ease 0s;"></span>
      </span>

      
      



          <header class="Header py-lg-0" role="banner">
  <div class="Header-item">
    <a class="Header-link" href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>

  </div>


  <div class="Header-item Header-item--full">
      <div class="header-search mr-3 scoped-search site-scoped-search js-site-search position-relative js-jump-to" role="combobox" aria-owns="jump-to-results" aria-label="Search or jump to" aria-haspopup="listbox" aria-expanded="false">
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --><form class="js-site-search-form" role="search" aria-label="Site" data-scope-type="Repository" data-scope-id="183026431" data-scoped-search-url="/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/search" data-unscoped-search-url="/search" action="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/search" accept-charset="UTF-8" method="get">
      <label class="form-control input-sm header-search-wrapper p-0 header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center js-chromeless-input-container">
        <input type="text" class="form-control input-sm header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable" data-hotkey="s,/" name="q" value="" placeholder="Search or jump to…" data-unscoped-placeholder="Search or jump to…" data-scoped-placeholder="Search or jump to…" autocapitalize="off" aria-autocomplete="list" aria-controls="jump-to-results" aria-label="Search or jump to…" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" spellcheck="false" autocomplete="off">
          <input type="hidden" value="ujmpS1yWAFwSsOzChSqh5UeJKkCqO2Agfo6BU/lCW04fILfMgCkErR5+3da61QXxxRzrN2oUwjM9nOBuk74dKQ==" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">
          <input type="hidden" class="js-site-search-type-field" name="type">
            <img src="./Assignment_files/search-key-slash.svg" alt="" class="mr-2 header-search-key-slash">

            <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
              
<ul class="d-none js-jump-to-suggestions-template-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-suggestion" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

</ul>

<ul class="d-none js-jump-to-no-results-template-container">
  <li class="d-flex flex-justify-center flex-items-center f5 d-none js-jump-to-suggestion p-2">
    <span class="text-gray">No suggested jump to results</span>
  </li>
</ul>

<ul id="jump-to-results" role="listbox" class="p-0 m-0 js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-global-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0013 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 000-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>


    <li class="d-flex flex-justify-center flex-items-center p-0 f5 js-jump-to-suggestion">
      <img src="./Assignment_files/octocat-spinner-128.gif" alt="Octocat Spinner Icon" class="m-2" width="28">
    </li>
</ul>

            </div>
      </label>
</form>  </div>
</div>


    <nav class="d-flex" aria-label="Global">

  <a class="js-selected-navigation-item Header-link py-lg-3  mr-3" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="https://github.com/pulls">
    Pull requests
</a>
  <a class="js-selected-navigation-item Header-link py-lg-3  mr-3" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="https://github.com/issues">
    Issues
</a>

    <div class="mr-3">
      <a class="js-selected-navigation-item Header-link py-lg-3 d-inline-block" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-octo-click="marketplace_click" data-octo-dimensions="location:nav_bar" data-selected-links=" /marketplace" href="https://github.com/marketplace">
        Marketplace
</a>      

    </div>

  <a class="js-selected-navigation-item Header-link py-lg-3  mr-3" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="https://github.com/explore">
    Explore
</a>

</nav>

  </div>


  <div class="Header-item">
    
    <a aria-label="You have no unread notifications" class="Header-link notification-indicator position-relative tooltipped tooltipped-sw js-socket-channel js-notification-indicator" data-hotkey="g n" data-ga-click="Header, go to notifications, icon:read" data-channel="notification-changed:52629233" href="https://github.com/notifications">
        <span class="js-indicator-modifier mail-status "></span>
        <svg class="octicon octicon-bell" viewBox="0 0 15 16" version="1.1" width="15" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>
</a>
  </div>


  <div class="Header-item position-relative">
    <details class="details-overlay details-reset">
  <summary class="Header-link" aria-label="Create new…" data-ga-click="Header, create new, icon:add" aria-haspopup="menu" role="button">
    <svg class="octicon octicon-plus" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5v2z"></path></svg> <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw mt-n2" role="menu">
    
<a role="menuitem" class="dropdown-item" href="https://github.com/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a role="menuitem" class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>


  <div role="none" class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">This repository</span>
  </div>
    <a role="menuitem" class="dropdown-item" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/issues/new/choose" data-ga-click="Header, create new issue" data-skip-pjax="">
      New issue
    </a>


  </details-menu>
</details>

  </div>

  <div class="Header-item position-relative mr-0">
    
  <details class="details-overlay details-reset js-feature-preview-indicator-container" data-feature-preview-indicator-src="/users/ShafayetB/feature_preview/indicator_check">

  <summary class="Header-link" aria-label="View profile and more" data-ga-click="Header, show menu, icon:avatar" aria-haspopup="menu" role="button">
    <img alt="@ShafayetB" width="20" height="20" src="./Assignment_files/52629233" class="avatar avatar-user ">

      <span class="feature-preview-indicator js-feature-preview-indicator" style="top: 10px;" hidden=""></span>
    <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw mt-n2" style="width: 180px" role="menu">
    <div class="header-nav-current-user css-truncate"><a role="menuitem" class="no-underline user-profile-link px-3 pt-2 pb-2 mb-n2 mt-n1 d-block" href="https://github.com/ShafayetB" data-ga-click="Header, go to profile, text:Signed in as">Signed in as <strong class="css-truncate-target">ShafayetB</strong></a></div>
    <div role="none" class="dropdown-divider"></div>

      <div class="pl-3 pr-3 f6 user-status-container js-user-status-context pb-1" data-url="/users/status?compact=1&amp;link_mentions=0&amp;truncate=1">
        
<div class="js-user-status-container
    user-status-compact rounded-1 px-2 py-1 mt-2
    border
  " data-team-hovercards-enabled="">
  <details class="js-user-status-details details-reset details-overlay details-overlay-dark">
    <summary class="btn-link btn-block link-gray no-underline js-toggle-user-status-edit toggle-user-status-edit " role="menuitem" data-hydro-click="{&quot;event_type&quot;:&quot;user_profile.click&quot;,&quot;payload&quot;:{&quot;profile_user_id&quot;:13152962,&quot;target&quot;:&quot;EDIT_USER_STATUS&quot;,&quot;user_id&quot;:52629233,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization&quot;}}" data-hydro-click-hmac="efe3d2bb3d882d1f455749a886d917c368e034f53e0bef9d8a2c277a4f9ee89b">
      <div class="d-flex">
        <div class="f6 lh-condensed user-status-header
          d-inline-block v-align-middle
            user-status-emoji-only-header circle
            pr-2
" style="max-width: 29px">
          <div class="user-status-emoji-container flex-shrink-0 mr-1  lh-condensed-ultra v-align-bottom" style="margin-top: 2px;">
            <div><g-emoji class="g-emoji" alias="man_technologist" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f468-1f4bb.png">👨‍💻</g-emoji></div>
          </div>
        </div>
        <div class="
          d-inline-block v-align-middle
          
          
           css-truncate css-truncate-target 
           user-status-message-wrapper f6" style="line-height: 20px;">
          <div class="d-inline-block text-gray-dark v-align-text-top text-left">
                <span>Believe in ur infinite potential ur o…</span>
          </div>
        </div>
      </div>
    </summary>
    <details-dialog class="details-dialog rounded-1 anim-fade-in fast Box Box--overlay" role="dialog" tabindex="-1" aria-modal="true">
      <!-- '"` --><!-- </textarea></xmp> --><form class="position-relative flex-auto js-user-status-form" action="https://github.com/users/status?compact=1&amp;link_mentions=0&amp;truncate=1" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="put"><input type="hidden" name="authenticity_token" value="p4+HbwQ9Uj/SOJbIrqubyLI6ifnaxho/GYEYRDOLpnsYWU+J9847Lcz/6dgiQ5905RUa1gVdwZUdeEjMlCEesg==">
        <div class="Box-header bg-gray border-bottom p-3">
          <button class="Box-btn-octicon js-toggle-user-status-edit btn-octicon float-right" type="reset" aria-label="Close dialog" data-close-dialog="">
            <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"></path></svg>
          </button>
          <h3 class="Box-title f5 text-bold text-gray-dark">Edit status</h3>
        </div>
        <input type="hidden" name="emoji" class="js-user-status-emoji-field" value=":man_technologist:">
        <input type="hidden" name="organization_id" class="js-user-status-org-id-field" value="">
        <div class="px-3 py-2 text-gray-dark">
          <div class="js-characters-remaining-container position-relative mt-2">
            <div class="input-group d-table form-group my-0 js-user-status-form-group">
              <span class="input-group-button d-table-cell v-align-middle" style="width: 1%">
                <button type="button" aria-label="Choose an emoji" class="btn-outline btn js-toggle-user-status-emoji-picker btn-open-emoji-picker p-0">
                  <span class="js-user-status-original-emoji" hidden=""><div><g-emoji class="g-emoji" alias="man_technologist" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f468-1f4bb.png">👨‍💻</g-emoji></div></span>
                  <span class="js-user-status-custom-emoji"><div><g-emoji class="g-emoji" alias="man_technologist" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f468-1f4bb.png">👨‍💻</g-emoji></div></span>
                  <span class="js-user-status-no-emoji-icon" hidden="">
                    <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8s3.58 8 8 8 8-3.58 8-8-3.58-8-8-8zm4.81 12.81a6.72 6.72 0 01-2.17 1.45c-.83.36-1.72.53-2.64.53-.92 0-1.81-.17-2.64-.53-.81-.34-1.55-.83-2.17-1.45a6.773 6.773 0 01-1.45-2.17A6.59 6.59 0 011.21 8c0-.92.17-1.81.53-2.64.34-.81.83-1.55 1.45-2.17.62-.62 1.36-1.11 2.17-1.45A6.59 6.59 0 018 1.21c.92 0 1.81.17 2.64.53.81.34 1.55.83 2.17 1.45.62.62 1.11 1.36 1.45 2.17.36.83.53 1.72.53 2.64 0 .92-.17 1.81-.53 2.64-.34.81-.83 1.55-1.45 2.17zM4 6.8v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2H5.2C4.53 8 4 7.47 4 6.8zm5 0v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2h-.59C9.53 8 9 7.47 9 6.8zm4 3.2c-.72 1.88-2.91 3-5 3s-4.28-1.13-5-3c-.14-.39.23-1 .66-1h8.59c.41 0 .89.61.75 1z"></path></svg>
                  </span>
                </button>
              </span>
              <text-expander keys=": @" data-mention-url="/autocomplete/user-suggestions" data-emoji-url="/autocomplete/emoji">
                <input type="text" autocomplete="off" data-no-org-url="/autocomplete/user-suggestions" data-org-url="/suggestions?mention_suggester=1" data-maxlength="80" class="d-table-cell width-full form-control js-user-status-message-field js-characters-remaining-field" placeholder="What&#39;s happening?" name="message" value="Believe in ur infinite potential ur only limitations are those u set upon urself" aria-label="What is your current status?">
              </text-expander>
              <div class="error">Could not update your status, please try again.</div>
            </div>
            <div style="margin-left: 53px" class="my-1 text-small label-characters-remaining js-characters-remaining" data-suffix="remaining" hidden="">
              80 remaining
            </div>
          </div>
          <include-fragment class="js-user-status-emoji-picker" data-url="/users/status/emoji"></include-fragment>
          <div class="overflow-auto ml-n3 mr-n3 px-3 border-bottom" style="max-height: 33vh">
            <div class="user-status-suggestions js-user-status-suggestions collapsed overflow-hidden">
              <h4 class="f6 text-normal my-3">Suggestions:</h4>
              <div class="mx-3 mt-2 clearfix">
                  <div class="float-left col-6">
                      <button type="button" value=":palm_tree:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="palm_tree" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f334.png">🌴</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          On vacation
                        </div>
                      </button>
                      <button type="button" value=":face_with_thermometer:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="face_with_thermometer" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f912.png">🤒</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Out sick
                        </div>
                      </button>
                  </div>
                  <div class="float-left col-6">
                      <button type="button" value=":house:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="house" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3e0.png">🏠</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Working from home
                        </div>
                      </button>
                      <button type="button" value=":dart:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="dart" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3af.png">🎯</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Focusing
                        </div>
                      </button>
                  </div>
              </div>
            </div>
            <div class="user-status-limited-availability-container">
              <div class="form-checkbox my-0">
                <input type="checkbox" name="limited_availability" value="1" class="js-user-status-limited-availability-checkbox" data-default-message="I may be slow to respond." aria-describedby="limited-availability-help-text-truncate-true-compact-true" id="limited-availability-truncate-true-compact-true">
                <label class="d-block f5 text-gray-dark mb-1" for="limited-availability-truncate-true-compact-true">
                  Busy
                </label>
                <p class="note" id="limited-availability-help-text-truncate-true-compact-true">
                  When others mention you, assign you, or request your review,
                  GitHub will let them know that you have limited availability.
                </p>
              </div>
            </div>
          </div>
          <div class="d-inline-block f5 mr-2 pt-3 pb-2">
  <div class="d-inline-block mr-1">
    Clear status
  </div>

  <details class="js-user-status-expire-drop-down f6 dropdown details-reset details-overlay d-inline-block mr-2">
    <summary class="f5 btn-link link-gray-dark border px-2 py-1 rounded-1" aria-haspopup="true">
      <div class="js-user-status-expiration-interval-selected d-inline-block v-align-baseline">
        Never
      </div>
      <div class="dropdown-caret"></div>
    </summary>

    <ul class="dropdown-menu dropdown-menu-se pl-0 overflow-auto" style="width: 220px; max-height: 15.5em">
      <li>
        <button type="button" class="btn-link dropdown-item js-user-status-expire-button ws-normal" title="Never">
          <span class="d-inline-block text-bold mb-1">Never</span>
          <div class="f6 lh-condensed">Keep this status until you clear your status or edit your status.</div>
        </button>
      </li>
      <li class="dropdown-divider" role="none"></li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 30 minutes" value="2020-05-03T21:26:20+06:00">
            in 30 minutes
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 1 hour" value="2020-05-03T21:56:20+06:00">
            in 1 hour
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 4 hours" value="2020-05-04T00:56:20+06:00">
            in 4 hours
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="today" value="2020-05-03T23:59:59+06:00">
            today
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="this week" value="2020-05-03T23:59:59+06:00">
            this week
          </button>
        </li>
    </ul>
  </details>
  <input class="js-user-status-expiration-date-input" type="hidden" name="expires_at" value="">
</div>

          <include-fragment class="js-user-status-org-picker" data-url="/users/status/organizations"></include-fragment>
        </div>
        <div class="d-flex flex-items-center flex-justify-between p-3 border-top">
          <button type="submit" class="width-full btn btn-primary mr-2 js-user-status-submit">
            Set status
          </button>
          <button type="button" class="width-full js-clear-user-status-button btn ml-2 js-user-status-exists">
            Clear status
          </button>
        </div>
</form>    </details-dialog>
  </details>
</div>

      </div>
      <div role="none" class="dropdown-divider"></div>

    <a role="menuitem" class="dropdown-item" href="https://github.com/ShafayetB" data-ga-click="Header, go to profile, text:your profile">Your profile</a>

    <a role="menuitem" class="dropdown-item" href="https://github.com/ShafayetB?tab=repositories" data-ga-click="Header, go to repositories, text:your repositories">Your repositories</a>

    <a role="menuitem" class="dropdown-item" href="https://github.com/ShafayetB?tab=projects" data-ga-click="Header, go to projects, text:your projects">Your projects</a>

    <a role="menuitem" class="dropdown-item" href="https://github.com/ShafayetB?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">Your stars</a>
      <a role="menuitem" class="dropdown-item" href="https://gist.github.com/mine" data-ga-click="Header, your gists, text:your gists">Your gists</a>





    <div role="none" class="dropdown-divider"></div>
      
<div id="feature-enrollment-toggle" class="hide-sm hide-md feature-preview-details position-relative">
  <button type="button" class="dropdown-item btn-link" role="menuitem" data-feature-preview-trigger-url="/users/ShafayetB/feature_previews" data-feature-preview-close-details="{&quot;event_type&quot;:&quot;feature_preview.clicks.close_modal&quot;,&quot;payload&quot;:{&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization&quot;,&quot;user_id&quot;:52629233}}" data-feature-preview-close-hmac="15053b38ce46a12610706d3a0751a2131b270ea3fc88d27b22c8d27630e717ef" data-hydro-click="{&quot;event_type&quot;:&quot;feature_preview.clicks.open_modal&quot;,&quot;payload&quot;:{&quot;link_location&quot;:&quot;user_dropdown&quot;,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="8895e676aae6679d67b04ab9e0786b902668b23c282c87750809701cdedf2721">
    Feature preview
  </button>
    <span class="feature-preview-indicator js-feature-preview-indicator" hidden=""></span>
</div>

    <a role="menuitem" class="dropdown-item" href="https://help.github.com/" data-ga-click="Header, go to help, text:help">Help</a>
    <a role="menuitem" class="dropdown-item" href="https://github.com/settings/profile" data-ga-click="Header, go to settings, icon:settings">Settings</a>
    <!-- '"` --><!-- </textarea></xmp> --><form class="logout-form" action="https://github.com/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="7jzcWNLfh1cKJ2upPcf24c8U5NSr5OwpZ/64T2Lfo2jNKCp3sfzKFt4tWqN6JazdHz00PuZS20tDlxISJ57Rzw==">
      
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout" role="menuitem">
        Sign out
      </button>
      <input type="text" name="required_field_f6d7" hidden="hidden" class="form-control"><input type="hidden" name="timestamp" value="1588517780625" class="form-control"><input type="hidden" name="timestamp_secret" value="3dbfbb9460f33c3aee635d6d14bb6401963422cb1934c317097e451142dcef20" class="form-control">
</form>  </details-menu>
</details>

  </div>

</header>

        

    </div>

  <div id="start-of-content" class="show-on-focus"></div>




    <div id="js-flash-container">


  <template class="js-flash-template"></template>
</div>


      

  <include-fragment class="js-notification-shelf-include-fragment" data-base-src="https://github.com/notifications/beta/shelf"></include-fragment>




  <div class="application-main " data-commit-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container" data-pjax-container="">
  


      <div class="border-bottom shelf intro-shelf js-notice mb-0 pb-4">
  <div class="width-full container">
    <div class="width-full mx-auto shelf-content">
      <h2 class="shelf-title">Learn Git and GitHub without any code!</h2>
      <p class="shelf-lead">
          Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.
      </p>
      <a class="btn btn-primary shelf-cta" target="_blank" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;READ_GUIDE&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="6581e354ca897fc8d86b0c2db84cc0cf4349f8cf8e077e6cf42c36b9bc3f0312" href="https://guides.github.com/activities/hello-world/">Read the guide</a>
    </div>
    <!-- '"` --><!-- </textarea></xmp> --><form class="shelf-dismiss js-notice-dismiss" action="https://github.com/dashboard/dismiss_bootcamp" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="delete"><input type="hidden" name="authenticity_token" value="Kd+BVI6I2z0qE8/ngoYgyIIfaOHAxdGxJDzecAnhwFNO3JJUuDEq5dOwIZpcmJ44fONGM1qXzOU046u3omeYWg==">
      <button name="button" type="submit" class="mr-1 close-button tooltipped tooltipped-w" aria-label="Hide this notice forever" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;DISMISS_BANNER&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="14b26307fea9bdda65dad741cc8a9941c811fbe99d405e7cc525e34f48e248ff">
        <svg aria-label="Hide this notice forever" class="octicon octicon-x v-align-text-top" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"></path></svg>
</button></form>  </div>
</div>










  <div class="pagehead repohead hx_repohead readability-menu bg-gray-light pb-0 pt-3">

    <div class="d-flex container-lg mb-4 px-3">

      <div class="flex-auto min-width-0 width-fit mr-3">
        <h1 class="public  d-flex flex-wrap flex-items-center break-word float-none ">
  <span class="flex-self-stretch" style="margin-top: -2px;">
      <svg class="octicon octicon-repo" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"></path></svg>
  </span>
  <span class="author ml-2 flex-self-stretch" itemprop="author">
    <a class="url fn" rel="author" data-hovercard-type="user" data-hovercard-url="/users/AlessandroCorradini/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/AlessandroCorradini">AlessandroCorradini</a>
  </span>
  <span class="path-divider flex-self-stretch">/</span>
  <strong itemprop="name" class="mr-2 flex-self-stretch">
    <a data-pjax="#js-repo-pjax-container" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">University-of-California-San-Diego-Big-Data-Specialization</a>
  </strong>
  
</h1>


      </div>

      <ul class="pagehead-actions flex-shrink-0 ">




  <li>
    
    <!-- '"` --><!-- </textarea></xmp> --><form data-remote="true" class="clearfix js-social-form js-social-container" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="oUVxwQupbesj9WYRRv9WqM2NNdIV1QiaZ7h0X+Ct0hKWCvqV/syvKbnj+TzkBDDbeXAENnjcNR4lvK1YU1CrEg==">      <input type="hidden" name="repository_id" value="183026431">

      <details class="details-reset details-overlay select-menu float-left">
        <summary class="select-menu-button float-left btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="44504cdc458da3c2daabc4ac9ea203f9ce213ada83d8712b18b223b8d875b88d" data-ga-click="Repository, click Watch settings, action:files#disambiguate" aria-haspopup="menu" role="button">          <span data-menu-button="">
              <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
              Watch
          </span>
</summary>        <details-menu class="select-menu-modal position-absolute mt-5" style="z-index: 99;" role="menu">
          <div class="select-menu-header">
            <span class="select-menu-title">Notifications</span>
          </div>
          <div class="select-menu-list">
            <button type="submit" name="do" value="included" class="select-menu-item width-full" aria-checked="true" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Not watching</span>
                <span class="description">Be notified only when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
                  Watch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="release_only" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Releases only</span>
                <span class="description">Be notified of new releases, and when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
                  Unwatch releases
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="subscribed" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Watching</span>
                <span class="description">Be notified of all conversations.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
                  Unwatch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="ignore" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Ignoring</span>
                <span class="description">Never be notified.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg class="octicon octicon-mute v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"></path></svg>
                  Stop ignoring
                </span>
              </div>
            </button>
          </div>
        </details-menu>
      </details>
        <a class="social-count js-social-count" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/watchers" aria-label="1 user is watching this repository">
          1
        </a>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <form class="starred js-social-form" action="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="YyWo3kWkN6wM7RnFc/sZhQe8KuupbcMZ+/NYjb3mN0o66p25Ux9IH7obOg+Ua6qm41rx5S9Q9X6YeP7jj8F7Pw==">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count js-toggler-target" aria-label="Unstar this repository" title="Unstar AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="4f242549f577208d693423efeba79c3f0b8702a707cf7c4b5d4f9dd8885ba15f" data-ga-click="Repository, click unstar button, action:files#disambiguate; text:Unstar">        <svg height="16" class="octicon octicon-star v-align-text-bottom" vertical_align="text_bottom" viewBox="0 0 14 16" version="1.1" width="14" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"></path></svg>

        Unstar
</button>        <a class="social-count js-social-count" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/stargazers" aria-label="19 users starred this repository">
           19
        </a>
</form>
    <form class="unstarred js-social-form" action="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="LwqkxfUM/gML87o+pbUV+HWHmFssVM8Qv2sRZb8cr6IWZWilgr9FD1VtN6BKy0apPuGW0aunsmQT51cHNcmK+A==">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count js-toggler-target" aria-label="Unstar this repository" title="Star AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="988ab0c15c0801f31932c7fc97038b1a7ec19034de30f51861307484a0dce964" data-ga-click="Repository, click star button, action:files#disambiguate; text:Star">        <svg height="16" class="octicon octicon-star v-align-text-bottom" vertical_align="text_bottom" viewBox="0 0 14 16" version="1.1" width="14" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"></path></svg>

        Star
</button>        <a class="social-count js-social-count" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/stargazers" aria-label="19 users starred this repository">
          19
        </a>
</form>  </div>

  </li>

  <li>
          <!-- '"` --><!-- </textarea></xmp> --><form class="btn-with-count" action="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/fork" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="ehjfGubV04gqDpGcBgYmAC+jSoQcIvZhaVE3j8LTao+GjqP0QwyHy7h0EDkBpXy0TlM5mXD3+iXtyNk3ys4zkQ==">
            <button class="btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;FORK_BUTTON&quot;,&quot;repository_id&quot;:183026431,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="2237f516408ea74d4a210770153b1bad6830d06aed5e05ba500cc22be3ed638b" data-ga-click="Repository, show fork modal, action:files#disambiguate; text:Fork" type="submit" title="Fork your own copy of AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization to your account" aria-label="Fork your own copy of AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization to your account">              <svg class="octicon octicon-repo-forked v-align-text-bottom" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 00-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 002 1a1.993 1.993 0 00-1 3.72V6.5l3 3v1.78A1.993 1.993 0 005 15a1.993 1.993 0 001-3.72V9.5l3-3V4.72A1.993 1.993 0 008 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"></path></svg>
              Fork
</button></form>
    <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/network/members" class="social-count" aria-label="35 users forked this repository">
      35
    </a>
  </li>
</ul>

    </div>
      <nav class="js-repo-nav js-sidenav-container-pjax clearfix hx_reponav reponav px-3 container-lg" itemscope="" itemtype="http://schema.org/BreadcrumbList" aria-label="Repository" data-pjax="#js-repo-pjax-container">
  <ul class="list-style-none">
    <li itemscope="" itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a class="js-selected-navigation-item selected reponav-item" itemprop="url" data-hotkey="g c" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization">
        <div class="d-inline"><svg class="octicon octicon-code" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"></path></svg></div>
        <span itemprop="name">Code</span>
        <meta itemprop="position" content="1">
</a>    </li>

      <li itemscope="" itemtype="http://schema.org/ListItem" itemprop="itemListElement">
        <a itemprop="url" data-hotkey="g i" class="js-selected-navigation-item reponav-item" data-selected-links="repo_issues repo_labels repo_milestones /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/issues" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/issues">
          <div class="d-inline"><svg class="octicon octicon-issue-opened" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7 2.3c3.14 0 5.7 2.56 5.7 5.7s-2.56 5.7-5.7 5.7A5.71 5.71 0 011.3 8c0-3.14 2.56-5.7 5.7-5.7zM7 1C3.14 1 0 4.14 0 8s3.14 7 7 7 7-3.14 7-7-3.14-7-7-7zm1 3H6v5h2V4zm0 6H6v2h2v-2z"></path></svg></div>
          <span itemprop="name">Issues</span>
          <span class="Counter">0</span>
          <meta itemprop="position" content="2">
</a>      </li>

    <li itemscope="" itemtype="http://schema.org/ListItem" itemprop="itemListElement">
      <a data-hotkey="g p" data-skip-pjax="true" itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_pulls checks /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/pulls" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/pulls">
        <div class="d-inline"><svg class="octicon octicon-git-pull-request" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0010 15a1.993 1.993 0 001-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 00-1 3.72v6.56A1.993 1.993 0 002 15a1.993 1.993 0 001-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"></path></svg></div>
        <span itemprop="name">Pull requests</span>
        <span class="Counter">1</span>
        <meta itemprop="position" content="4">
</a>    </li>


      <li itemscope="" itemtype="http://schema.org/ListItem" itemprop="itemListElement" class="position-relative float-left ">
        <a data-hotkey="g w" data-skip-pjax="true" class="js-selected-navigation-item reponav-item" data-selected-links="repo_actions /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/actions" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/actions">
          <div class="d-inline"><svg class="octicon octicon-play" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 8A7 7 0 110 8a7 7 0 0114 0zm-8.223 3.482l4.599-3.066a.5.5 0 000-.832L5.777 4.518A.5.5 0 005 4.934v6.132a.5.5 0 00.777.416z"></path></svg></div>
          Actions
</a>
      </li>

      <li>
        <a data-hotkey="g b" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/projects" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/projects">
          <div class="d-inline"><svg class="octicon octicon-project" viewBox="0 0 15 16" version="1.1" width="15" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 00-1 1v14a1 1 0 001 1h13a1 1 0 001-1V1a1 1 0 00-1-1z"></path></svg></div>
          Projects
          <span class="Counter">0</span>
</a>      </li>

      <li>
        <a class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/wiki" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/wiki">
          <div class="d-inline"><svg class="octicon octicon-book" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"></path></svg></div>
          Wiki
</a>      </li>

      <li>
        <a data-skip-pjax="true" class="js-selected-navigation-item reponav-item" data-selected-links="security overview alerts policy token_scanning code_scanning /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/security" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/security">
          <div class="d-inline"><svg class="octicon octicon-shield" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 2l7-2 7 2v6.02C14 12.69 8.69 16 7 16c-1.69 0-7-3.31-7-7.98V2zm1 .75L7 1l6 1.75v5.268C13 12.104 8.449 15 7 15c-1.449 0-6-2.896-6-6.982V2.75zm1 .75L7 2v12c-1.207 0-5-2.482-5-5.985V3.5z"></path></svg></div>
          Security
              <span class="Counter js-security-tab-count" data-url="/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/security/overall-count">0</span>
</a>      </li>

      <li>
        <a class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people /AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/pulse" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/pulse">
          <div class="d-inline"><svg class="octicon octicon-graph" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"></path></svg></div>
          Insights
</a>      </li>


  </ul>
</nav>


  </div>


<div class="container-lg clearfix new-discussion-timeline  px-3">
  <div class="repository-content ">

    
    
  <div class="file-navigation ">
      
<details class="details-reset details-overlay branch-select-menu float-left" id="branch-select-menu">
  <summary class="btn css-truncate btn-sm" data-hotkey="w" title="Switch branches or tags" aria-haspopup="menu" role="button">
    <i>Branch:</i>
    <span class="css-truncate-target" data-menu-button="">master</span>
    <span class="dropdown-caret"></span>
  </summary>

  <details-menu class="SelectMenu SelectMenu--hasFilter" src="/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/refs/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?source_action=disambiguate&amp;source_controller=files" preload="" role="menu">
    <div class="SelectMenu-modal">
      
<header class="SelectMenu-header">
  <span class="SelectMenu-title">Switch branches/tags</span>
  <button class="SelectMenu-closeButton" type="button" data-toggle-for="branch-select-menu"><svg aria-label="Close menu" class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"></path></svg></button>
</header>

<tab-container class="d-flex flex-column js-branches-tags-tabs" style="min-height: 0;">
  <div class="SelectMenu-filter">
    <filter-input aria-owns="ref-list-branches" data-controls-ref-menu-id="ref-list-branches">
      <input type="text" id="context-commitish-filter-field" class="SelectMenu-input form-control" autofocus="" autocomplete="off" aria-label="Filter branches/tags" placeholder="Filter branches/tags" spellcheck="false">
    </filter-input>

    <remote-input src="/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/refs-tags/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?source_action=disambiguate&amp;source_controller=files&amp;tag_name=master" aria-owns="tags-menu" data-controls-ref-menu-id="tags-menu" hidden="">
      <input type="text" class="SelectMenu-input form-control" aria-label="Find a tag" placeholder="Find a tag" autofocus="" autocomplete="off" spellcheck="false">
    </remote-input>
  </div>

  <div class="SelectMenu-tabs" role="tablist">
    <button class="SelectMenu-tab" type="button" data-filter-placeholder="Filter branches/tags" role="tab" aria-selected="true" tabindex="0">Branches</button>
    <button class="SelectMenu-tab" type="button" data-filter-placeholder="Find a tag" role="tab" aria-selected="false" tabindex="-1">Tags</button>
  </div>

  <div class="SelectMenu-list" role="tabpanel" id="ref-list-branches">
    <div data-filter-list="">

        <a class="SelectMenu-item" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" role="menuitemradio" aria-checked="true" rel="nofollow">
          <svg class="octicon octicon-check SelectMenu-icon SelectMenu-icon--check" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>
            <span class="flex-1 break-word" data-menu-button-text="" data-filter-item-text="">master</span>
            <span class="Label Label--gray flex-self-start">default</span>
        </a>

        <div class="SelectMenu-message" data-filter-empty-state="" hidden="">Nothing to show</div>
    </div>
  </div>

  <div class="SelectMenu-list" role="tabpanel" id="tags-menu" hidden="">
    <div class="SelectMenu-message">Search for a tag</div>
  </div>
</tab-container>

    </div>
  </details-menu>
</details>


      <div class="BtnGroup float-right">
        
    <!-- '"` --><!-- </textarea></xmp> --><form class="BtnGroup-parent" action="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/new/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="wAjIcUGiitlgnR8lJFVbscYEULiggIC2WvWf/ZmJKvHJFYSZHJ7JIuVIIRH/AxzPPYjdRmmEOadRhc6kia0tSQ==">
      <button class="btn btn-sm BtnGroup-item" type="submit" data-disable-with="Creating file…">
        Create new file
      </button>
</form>

          <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/upload/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" class="btn btn-sm BtnGroup-item">
            Upload files
          </a>

        <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/find/master" data-pjax="" data-hotkey="t" class="js-pjax-capture-input btn btn-sm BtnGroup-item empty-icon">
          Find file
        </a>
        <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commits/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;" class="btn btn-sm BtnGroup-item empty-icon">

          History
        </a>
      </div>
      <div class="breadcrumb mb-2"><span class="js-repo-root text-bold"><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization"><span>University-of-California-San-Diego-Big-Data-Specialization</span></a></span></span><span class="separator">/</span><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems"><span>02 - Big Data Modelling and Management Systems</span></a></span><span class="separator">/</span><strong class="final-path">Assignment - Designing a Data Model for 'Catch the Pink Flamingo'</strong><span class="separator">/</span></div>
  </div>


  

<div class="Box mb-3 Box--condensed">
  <div class="Box-header Box-header--blue position-relative " style="margin-bottom:-1px;">
    <h2 class="sr-only">Latest commit</h2>
    <div class="commit-tease js-details-container Details d-flex rounded-top-1 flex-auto" data-issue-and-pr-hovercards-enabled="">
        
    
<div class="AvatarStack flex-self-start ">
  <div class="AvatarStack-body" aria-label="AlessandroCorradini">
        <a class="avatar avatar-user" data-skip-pjax="true" data-hovercard-type="user" data-hovercard-url="/users/AlessandroCorradini/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/AlessandroCorradini">
          <img height="20" width="20" alt="@AlessandroCorradini" src="https://avatars2.githubusercontent.com/u/13152962?s=60&amp;v=4" class=" avatar-user">
</a>  </div>
</div>

    <div class="flex-auto f6 mr-3">
      
      <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commits?author=AlessandroCorradini" class="commit-author tooltipped tooltipped-s user-mention" aria-label="View all commits by AlessandroCorradini">AlessandroCorradini</a>


  


        <a data-pjax="true" title="Uploading files" class="message text-inherit" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>

    </div>
    <div class="no-wrap d-flex flex-self-start flex-items-baseline">
        <span class="mr-2 flex-self-center">
          
        </span>
      <span class="mr-1">Latest commit</span>
      <a class="commit-tease-sha mr-1" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c" data-pjax="">
        0bab057
      </a>
      <span itemprop="dateModified"><relative-time datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">on 23 Apr 2019</relative-time></span>
    </div>
    </div>
  </div>
  <h2 id="files" class="sr-only">Files</h2>
  


    <a class="d-none js-permalink-shortcut" data-hotkey="y" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/1461ea593be49b82886fe14ee6f87ba17ed87bd2/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">Permalink</a>

    <table class="files js-navigation-container js-active-navigation-container " data-pjax="">
      <thead>
        <tr>
          <th><span class="sr-only">Type</span></th>
          <th><span class="sr-only">Name</span></th>
          <th><span class="sr-only">Latest commit message</span></th>
          <th><span class="sr-only">Commit time</span></th>
        </tr>
      </thead>
        <tbody><tr class="up-tree js-navigation-item">
          <td></td>
          <td><a rel="nofollow" title="Go to parent directory" class="js-navigation-open" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems">..</a></td>
          <td></td>
          <td></td>
        </tr>


      </tbody><tbody>
        <tr class="warning include-fragment-error">
          <td class="icon"><svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 000 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 00.01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"></path></svg></td>
          <td class="content" colspan="3">Failed to load latest commit information.</td>
        </tr>

          <tr class="js-navigation-item navigation-focus">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="Assignment.md" id="f7cf9a9e2a68d50a08350cfd184e7f28-64255154ffaea5ce4fed6d93ef762bd7492e8603" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Assignment.md">Assignment.md</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
          <tr class="js-navigation-item">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="Chats.jpg" id="700982453c9667d2bb5daa8a6868300a-9ba0f8066b1b65c0b7fe92825833fcce9b6cae7b" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Chats.jpg">Chats.jpg</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
          <tr class="js-navigation-item">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="README.md" id="04c6e90faac2675aa89e2176d2eec7d8-2a230d5307d80b93476dc8df65ef524fb5e82713" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/README.md">README.md</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
          <tr class="js-navigation-item">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="Teams.png" id="3a5d1b0fc5402c87194070c0033adc2d-4af54cf53adcfbef9f3058d26d8dba2df6367a8b" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Teams.png">Teams.png</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
          <tr class="js-navigation-item">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="Tree.jpg" id="2d3cf4770eefa1244464b0371009c2b0-8f1c7bc0f1087a9416d10123de4cf602860c6119" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Tree.jpg">Tree.jpg</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
          <tr class="js-navigation-item">
            <td class="icon">
              <svg aria-label="file" class="octicon octicon-file" viewBox="0 0 12 16" version="1.1" width="12" height="16" role="img"><path fill-rule="evenodd" d="M6 5H2V4h4v1zM2 8h7V7H2v1zm0 2h7V9H2v1zm0 2h7v-1H2v1zm10-7.5V14c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V2c0-.55.45-1 1-1h7.5L12 4.5zM11 5L8 2H1v12h10V5z"></path></svg>
              <img width="16" height="16" class="spinner" alt="" src="https://github.githubassets.com/images/spinners/octocat-spinner-32.gif">
            </td>
            <td class="content">
              <span class="css-truncate css-truncate-target"><a class="js-navigation-open " title="Users.jpg" id="6ddc02254fd7054364e48a62b768f49b-b787cc2c59bf49676a2038f47fbb1dac5fb2aa45" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Users.jpg">Users.jpg</a></span>
            </td>
            <td class="message">
              <span class="css-truncate css-truncate-target">
                    <a data-pjax="true" title="Uploading files" class="link-gray" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/commit/0bab05750903116edccb7495b8238f98835dd25c">Uploading files</a>
              </span>
            </td>
            <td class="age">
              <span class="css-truncate css-truncate-target"><time-ago datetime="2019-04-23T13:56:09Z" class="no-wrap" title="23 Apr 2019, 19:56 GMT+6">13 months ago</time-ago></span>
            </td>
          </tr>
      </tbody>
    </table>




</div>

  <div id="readme" class="Box md js-code-block-container Box--condensed">
    <div class="Box-header d-flex flex-items-center flex-justify-between ">
      <h2 class="Box-title pr-3">
        <svg class="octicon octicon-book" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"></path></svg>
        README.md
      </h2>
    </div>
        <div class="Popover anim-scale-in js-tagsearch-popover" hidden="" data-tagsearch-url="/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/find-symbols" data-tagsearch-ref="master" data-tagsearch-path="02 - Big Data Modelling and Management Systems/Assignment - Designing a Data Model for &#39;Catch the Pink Flamingo&#39;/README.md" data-tagsearch-lang="Markdown" data-hydro-click="{&quot;event_type&quot;:&quot;code_navigation.click_on_symbol&quot;,&quot;payload&quot;:{&quot;action&quot;:&quot;click_on_symbol&quot;,&quot;repository_id&quot;:183026431,&quot;ref&quot;:&quot;master&quot;,&quot;language&quot;:&quot;Markdown&quot;,&quot;originating_url&quot;:&quot;https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;?_pjax=%23js-repo-pjax-container&quot;,&quot;user_id&quot;:52629233}}" data-hydro-click-hmac="a31d33852a2faf9c934693a0f22f4d9ad9ce274975ea1f452b5a092f1f605d30">
  <div class="Popover-message Popover-message--large Popover-message--top-left TagsearchPopover mt-1 mb-4 mx-auto Box box-shadow-large">
    <div class="TagsearchPopover-content js-tagsearch-popover-content overflow-auto" style="will-change:transform;">
    </div>
  </div>
</div>

      <div class="Box-body p-5">
        <article class="markdown-body entry-content" itemprop="text"><h1><a id="user-content-peer-graded-assignment-designing-a-data-model-for-catch-the-pink-flamingo" class="anchor" aria-hidden="true" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;#peer-graded-assignment-designing-a-data-model-for-catch-the-pink-flamingo"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Peer-graded Assignment: Designing a Data Model for 'Catch the Pink Flamingo'</h1>
<p>The goal of this assignment is to design the data structures required for creating the game. Remember, that there are three aspects of the game:</p>
<ol>
<li>
<p>Designing the data required to run the game</p>
</li>
<li>
<p>Keeping track of what is going on when people are actually playing the game, and</p>
</li>
<li>
<p>Analyzing how people played past games so that we can improve the way the game is played</p>
</li>
</ol>
<p>With this in mind, let us list what we would need.</p>
<p>First, the game will have <strong>users</strong>, i.e., the players and we need to know some details about them. This information will typically be a relational table that may look like this.</p>
<p>Users ( userID:longInteger, userName:string, joiningDate:date, dateOfBirth:date, currentLevel:int, authenticationKey:string )</p>
<p>Diagrammatically, this would look like:</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Users.jpg"><img src="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/raw/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Users.jpg" alt="" style="max-width:100%;"></a></p>
<p>where <strong>userID</strong> is underlined because it is a primary key for this relation.</p>
<p>We also know that users would form <strong>teams</strong>. However, these teams would possibly grow and shrink with time. But it is reasonable to assume that one user will be a part of only one team at any time, and unless we know that the user joined another team more recently, the user belongs to the team she joined last. We can also model teams as relations, which might look like this:</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/blob/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Teams.png"><img src="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/raw/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;/Teams.png" alt="" style="max-width:100%;"></a></p>
<p>With this table we should be able to determine the members of a team at any point in time, and track how a user has changed teams over time. Remember that a level 1 user will not appear in this table.</p>
<p>For this assignment, we will present incomplete specifications for a few data structures and your task will be to complete them.</p>
</article>
      </div>
  </div>



  </div>
</div>











</main>
  </div>
  

  </div>

        
<div class="footer container-lg width-full px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">© 2020 GitHub, Inc.</li>
        <li class="mr-3"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to security, text:security" href="https://github.com/security">Security</a></li>
        <li class="mr-3"><a href="https://githubstatus.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://help.github.com/">Help</a></li>

    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mx-lg-4" href="https://github.com/">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
        <li class="mr-3"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
      <li class="mr-3"><a href="https://developer.github.com/" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com/" data-ga-click="Footer, go to training, text:training">Training</a></li>
        <li class="mr-3"><a href="https://github.blog/" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>
    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 000 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 00.01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"></path></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"></path></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    <script crossorigin="anonymous" async="async" integrity="sha512-WcQmT2vhcClFVOaaAJV/M+HqsJ2Gq/myvl6F3gCVBxykazXTs+i5fvxncSXwyG1CSfcrqmLFw/R/bmFYzprX2A==" type="application/javascript" id="js-conditional-compat" data-src="https://github.githubassets.com/assets/compat-bootstrap-59c4264f.js"></script>
    <script crossorigin="anonymous" integrity="sha512-Qb7XHcWIafGt8U6FsJrxJqGCgszwjKK1zXv1+fAjIz0HDaYppswlGLxEInNMN2dlMBAZnZNSZL8wAvvhKxYx3A==" type="application/javascript" src="./Assignment_files/environment-bootstrap-41bed71d.js.download"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-327XCyOytNBlvvFRes7NYmY/gSME67CreRw+pR2DhNKBfEb2Sv0pe/XkZUSqYYlgGdDnaGIKUAb4oRZBLdKBfw==" type="application/javascript" src="./Assignment_files/vendor-df6ed70b.js.download"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-eXpQLpAhVAJMHk7Z0KCmLWkovVfHkwsEb7RddC/hfCt62wuVC8JAZUWiTeScadRGkJBFX6UxgmrE/uhItlLvqA==" type="application/javascript" src="./Assignment_files/frameworks-797a502e.js.download"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-W5UYmkQ8/XyVD/8xIbAMNduNy2utCipfwBvHn2u3HrdMFvCpOHJr5DcY43xF3S176Gxv4tc9pdVw13aIdQ6wNg==" type="application/javascript" src="./Assignment_files/github-bootstrap-5b95189a.js.download"></script>
    
    
    
  <div class="js-stale-session-flash flash flash-warn flash-banner" hidden="">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 000 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 00.01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"></path></svg>
    <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">Reload</a> to refresh your session.</span>
    <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a href="https://github.com/AlessandroCorradini/University-of-California-San-Diego-Big-Data-Specialization/tree/master/02%20-%20Big%20Data%20Modelling%20and%20Management%20Systems/Assignment%20-%20Designing%20a%20Data%20Model%20for%20&#39;Catch%20the%20Pink%20Flamingo&#39;">Reload</a> to refresh your session.</span>
  </div>
  <template id="site-details-dialog"></template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;"></div>
</div>


  


<div aria-live="polite" class="sr-only"></div></body></html>
