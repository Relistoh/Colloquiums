{"payload":{"allShortcutsEnabled":true,"fileTree":{"colloquims OS/Colloquim1":{"items":[{"name":"Fibonacci.java","path":"colloquims OS/Colloquim1/Fibonacci.java","contentType":"file"},{"name":"FibonacciTest.java","path":"colloquims OS/Colloquim1/FibonacciTest.java","contentType":"file"},{"name":"LinkedListReverse.java","path":"colloquims OS/Colloquim1/LinkedListReverse.java","contentType":"file"},{"name":"LinkedListReverseTest.java","path":"colloquims OS/Colloquim1/LinkedListReverseTest.java","contentType":"file"},{"name":"ListNode.java","path":"colloquims OS/Colloquim1/ListNode.java","contentType":"file"},{"name":"Main1.java","path":"colloquims OS/Colloquim1/Main1.java","contentType":"file"},{"name":"RemoveDuplicates.java","path":"colloquims OS/Colloquim1/RemoveDuplicates.java","contentType":"file"},{"name":"RemoveDuplicatesTest.java","path":"colloquims OS/Colloquim1/RemoveDuplicatesTest.java","contentType":"file"},{"name":"Коллоквиум1_ОС_Денисова_7группа_8вариант.pdf","path":"colloquims OS/Colloquim1/Коллоквиум1_ОС_Денисова_7группа_8вариант.pdf","contentType":"file"}],"totalCount":9},"colloquims OS":{"items":[{"name":"Colloquim1","path":"colloquims OS/Colloquim1","contentType":"directory"},{"name":"Colloquim2","path":"colloquims OS/Colloquim2","contentType":"directory"},{"name":".DS_Store","path":"colloquims OS/.DS_Store","contentType":"file"}],"totalCount":3},"":{"items":[{"name":"colloquims IP","path":"colloquims IP","contentType":"directory"},{"name":"colloquims OS","path":"colloquims OS","contentType":"directory"},{"name":".DS_Store","path":".DS_Store","contentType":"file"}],"totalCount":3}},"fileTreeProcessingTime":5.858195,"foldersToFetch":[],"reducedMotionEnabled":"system","repo":{"id":723677619,"defaultBranch":"main","name":"colloquiums","ownerLogin":"denisovamaria","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-11-26T15:42:33.000+03:00","ownerAvatar":"https://avatars.githubusercontent.com/u/137921775?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":true,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1701002660.0","canEdit":true,"refType":"branch","currentOid":"6edbb7b4665f463cbb530465623325b1b3625c1c"},"path":"colloquims OS/Colloquim1/Main1.java","currentUser":{"id":138132376,"login":"Relistoh","userEmail":"slavnikovanton@gmail.com"},"blob":{"rawLines":["package fibonachi;","","import java.io.File;","import java.io.FileNotFoundException;","import java.util.Scanner;","","public class Main1 {","    public static void main(String[] args) {","        Fibonacci fib = new Fibonacci();","        try (Scanner in = new Scanner(new File(\"Input1.txt\"))) {","            fib.readData(in);","            fib.calculateFibonacci();","            System.out.print(fib.getFibonacciList());","        } catch (FileNotFoundException e) {","            System.err.println(\"File not found: \" + e.getMessage());","            e.printStackTrace();","        }","    }","}"],"stylingDirectives":[[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":17,"cssClass":"pl-s1"}],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":11,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-s1"},{"start":15,"end":19,"cssClass":"pl-s1"}],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":11,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-s1"},{"start":15,"end":36,"cssClass":"pl-s1"}],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":11,"cssClass":"pl-s1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":17,"end":24,"cssClass":"pl-s1"}],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":12,"cssClass":"pl-k"},{"start":13,"end":18,"cssClass":"pl-smi"}],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":17,"cssClass":"pl-k"},{"start":18,"end":22,"cssClass":"pl-smi"},{"start":23,"end":27,"cssClass":"pl-en"},{"start":28,"end":34,"cssClass":"pl-smi"},{"start":37,"end":41,"cssClass":"pl-s1"}],[{"start":8,"end":17,"cssClass":"pl-smi"},{"start":18,"end":21,"cssClass":"pl-s1"},{"start":24,"end":27,"cssClass":"pl-k"},{"start":28,"end":37,"cssClass":"pl-smi"}],[{"start":8,"end":11,"cssClass":"pl-k"},{"start":13,"end":20,"cssClass":"pl-smi"},{"start":21,"end":23,"cssClass":"pl-s1"},{"start":26,"end":29,"cssClass":"pl-k"},{"start":30,"end":37,"cssClass":"pl-smi"},{"start":38,"end":41,"cssClass":"pl-k"},{"start":42,"end":46,"cssClass":"pl-smi"},{"start":47,"end":59,"cssClass":"pl-s"}],[{"start":12,"end":15,"cssClass":"pl-s1"},{"start":16,"end":24,"cssClass":"pl-en"},{"start":25,"end":27,"cssClass":"pl-s1"}],[{"start":12,"end":15,"cssClass":"pl-s1"},{"start":16,"end":34,"cssClass":"pl-en"}],[{"start":12,"end":18,"cssClass":"pl-smi"},{"start":19,"end":22,"cssClass":"pl-s1"},{"start":23,"end":28,"cssClass":"pl-en"},{"start":29,"end":32,"cssClass":"pl-s1"},{"start":33,"end":49,"cssClass":"pl-en"}],[{"start":10,"end":15,"cssClass":"pl-k"},{"start":17,"end":38,"cssClass":"pl-smi"},{"start":39,"end":40,"cssClass":"pl-s1"}],[{"start":12,"end":18,"cssClass":"pl-smi"},{"start":19,"end":22,"cssClass":"pl-s1"},{"start":23,"end":30,"cssClass":"pl-en"},{"start":31,"end":49,"cssClass":"pl-s"},{"start":52,"end":53,"cssClass":"pl-s1"},{"start":54,"end":64,"cssClass":"pl-en"}],[{"start":12,"end":13,"cssClass":"pl-s1"},{"start":14,"end":29,"cssClass":"pl-en"}],[],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/denisovamaria/colloquiums/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false,"repoAlertsPath":"/denisovamaria/colloquiums/security/dependabot","repoSecurityAndAnalysisPath":"/denisovamaria/colloquiums/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"Main1.java","displayUrl":"https://github.com/denisovamaria/colloquiums/blob/main/colloquims%20OS/Colloquim1/Main1.java?raw=true","headerInfo":{"blobSize":"564 Bytes","deleteInfo":{"deleteTooltip":"Fork this repository and delete the file"},"editInfo":{"editTooltip":"Fork this repository and edit the file"},"ghDesktopPath":"x-github-client://openRepo/https://github.com/denisovamaria/colloquiums?branch=main&filepath=colloquims%20OS%2FColloquim1%2FMain1.java","gitLfsPath":null,"onBranch":true,"shortPath":"a612bb3","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fdenisovamaria%2Fcolloquiums%2Fblob%2Fmain%2Fcolloquims%2520OS%2FColloquim1%2FMain1.java","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"19","truncatedSloc":"17"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"Java","languageID":181,"large":false,"loggedIn":true,"newDiscussionPath":"/denisovamaria/colloquiums/discussions/new","newIssuePath":"/denisovamaria/colloquiums/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/denisovamaria/colloquiums/blob/main/colloquims%20OS/Colloquim1/Main1.java","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/denisovamaria/colloquiums/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/denisovamaria/colloquiums/raw/main/colloquims%20OS/Colloquim1/Main1.java","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"denisovamaria","repoName":"colloquiums","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"Main1","kind":"class","ident_start":119,"ident_end":124,"extent_start":106,"extent_end":563,"fully_qualified_name":"Main1","ident_utf16":{"start":{"line_number":6,"utf16_col":13},"end":{"line_number":6,"utf16_col":18}},"extent_utf16":{"start":{"line_number":6,"utf16_col":0},"end":{"line_number":18,"utf16_col":1}}},{"name":"main","kind":"method","ident_start":150,"ident_end":154,"extent_start":131,"extent_end":561,"fully_qualified_name":"Main1::main","ident_utf16":{"start":{"line_number":7,"utf16_col":23},"end":{"line_number":7,"utf16_col":27}},"extent_utf16":{"start":{"line_number":7,"utf16_col":4},"end":{"line_number":17,"utf16_col":5}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"accessAllowed":false,"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"copilotAccessAllowed":false,"csrf_tokens":{"/denisovamaria/colloquiums/branches":{"post":"aHfEabBoHiWjTKgrNc0NVfJlkOLoVPU6R8jsrcobe7GrIDf_3xCZYigygWASUjPMC_ZIdS59rNJw0HbWpnV2Mw"},"/repos/preferences":{"post":"FqoW94HUT0wlI4w9jGEHU8CIQ_ngZOFNaiFubqKlpOIb-VxCoNf10xg0X4wCGcV4OrrzUPpfI5H5esFubZS7Ww"}}},"title":"colloquiums/colloquims OS/Colloquim1/Main1.java at main · denisovamaria/colloquiums"}