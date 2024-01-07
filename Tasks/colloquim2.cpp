{"payload":{"allShortcutsEnabled":true,"fileTree":{"colloquims OS/Colloquim2":{"items":[{"name":"colloquim2.cpp","path":"colloquims OS/Colloquim2/colloquim2.cpp","contentType":"file"},{"name":"in.dat","path":"colloquims OS/Colloquim2/in.dat","contentType":"file"},{"name":"out.dat","path":"colloquims OS/Colloquim2/out.dat","contentType":"file"}],"totalCount":3},"colloquims OS":{"items":[{"name":"Colloquim1","path":"colloquims OS/Colloquim1","contentType":"directory"},{"name":"Colloquim2","path":"colloquims OS/Colloquim2","contentType":"directory"},{"name":".DS_Store","path":"colloquims OS/.DS_Store","contentType":"file"}],"totalCount":3},"":{"items":[{"name":"colloquims IP","path":"colloquims IP","contentType":"directory"},{"name":"colloquims OS","path":"colloquims OS","contentType":"directory"},{"name":".DS_Store","path":".DS_Store","contentType":"file"}],"totalCount":3}},"fileTreeProcessingTime":5.151098,"foldersToFetch":[],"reducedMotionEnabled":"system","repo":{"id":723677619,"defaultBranch":"main","name":"colloquiums","ownerLogin":"denisovamaria","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-11-26T15:42:33.000+03:00","ownerAvatar":"https://avatars.githubusercontent.com/u/137921775?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":true,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1701002660.0","canEdit":true,"refType":"branch","currentOid":"6edbb7b4665f463cbb530465623325b1b3625c1c"},"path":"colloquims OS/Colloquim2/colloquim2.cpp","currentUser":{"id":138132376,"login":"Relistoh","userEmail":"slavnikovanton@gmail.com"},"blob":{"rawLines":["﻿#include <iostream>\r","#include <fstream>\r","#include <vector>\r","#include <thread>\r","#include <mutex>\r","#include <cmath>\r","#include <sstream>\r","\r","class Action {\r","public:\r","    virtual double perform(const std::vector<double>& numbers) const = 0;\r","    virtual ~Action() = default;\r","};\r","\r","class Addition : public Action {\r","public:\r","    double perform(const std::vector<double>& numbers) const override {\r","        double result = 0;\r","        for (double num : numbers) {\r","            result += num;\r","        }\r","        return result;\r","    }\r","};\r","\r","class Multiplication : public Action {\r","public:\r","    double perform(const std::vector<double>& numbers) const override {\r","        double result = 1;\r","        for (double num : numbers) {\r","            result *= num;\r","        }\r","        return result;\r","    }\r","};\r","\r","class SquareSum : public Action {\r","public:\r","    double perform(const std::vector<double>& numbers) const override {\r","        double result = 0;\r","        for (double num : numbers) {\r","            result += std::pow(num, 2);\r","        }\r","        return result;\r","    }\r","};\r","\r","void processFile(const std::string& filename, const Action& action, double& result, std::mutex& mutex) {\r","    std::ifstream file(filename);\r","    if (file.is_open()) {\r","        std::vector<double> numbers;\r","        double num;\r","        while (file >> num) {\r","            numbers.push_back(num);\r","        }\r","        file.close();\r","\r","        double partialResult = action.perform(numbers);\r","\r","        std::lock_guard<std::mutex> lock(mutex);\r","        result += partialResult;\r","    }\r","    else {\r","        std::cerr << \"Error opening file: \" << filename << std::endl;\r","    }\r","}\r","\r","int main(int argc, char* argv[]) {\r","    if (argc != 3) {\r","        std::cerr << \"Usage: \" << argv[0] << \" <directory_path> <num_threads>\" << std::endl;\r","        return 1;\r","    }\r","\r","    std::string directoryPath = argv[1];\r","    int numThreads = std::stoi(argv[2]);\r","\r","    Addition addition;\r","    Multiplication multiplication;\r","    SquareSum squareSum;\r","\r","    std::vector<std::thread> threads;\r","    double totalResult = 0;\r","    std::mutex resultMutex;\r","\r","    for (int i = 1; i <= numThreads; ++i) {\r","        std::string filename = directoryPath + \"/in_\" + std::to_string(i) + \".dat\";\r","        int actionType = i % 3 + 1;\r","\r","        const Action* action = nullptr; // Добавляем значение по умолчанию\r","\r","        switch (actionType) {\r","        case 1:\r","            action = &addition;\r","            break;\r","        case 2:\r","            action = &multiplication;\r","            break;\r","        case 3:\r","            action = &squareSum;\r","            break;\r","        }\r","\r","        // Проверка, что переменная action инициализирована\r","        if (!action) {\r","            std::cerr << \"Error: Unsupported action type.\" << std::endl;\r","            return 1;\r","        }\r","\r","        threads.emplace_back(processFile, filename, std::ref(*action), std::ref(totalResult), std::ref(resultMutex));\r","    }\r","\r","    for (std::thread& thread : threads) {\r","        thread.join();\r","    }\r","\r","    std::ofstream outFile(directoryPath + \"/out.dat\");\r","    if (outFile.is_open()) {\r","        std::stringstream resultStream;\r","        resultStream << \"Total Result: \" << totalResult << std::endl;\r","        outFile << resultStream.str();\r","        outFile.close();\r","    }\r","    else {\r","        std::cerr << \"Error opening output file.\" << std::endl;\r","        return 1;\r","    }\r","\r","    return 0;\r","}"],"stylingDirectives":[[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":18,"end":19,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":17,"end":18,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":16,"end":17,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":16,"end":17,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":16,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":15,"end":16,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":16,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":15,"end":16,"cssClass":"pl-pds"}],[{"start":1,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"},{"start":9,"end":10,"cssClass":"pl-pds"},{"start":17,"end":18,"cssClass":"pl-pds"}],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":12,"cssClass":"pl-en"}],[{"start":0,"end":7,"cssClass":"pl-k"}],[{"start":4,"end":11,"cssClass":"pl-k"},{"start":12,"end":18,"cssClass":"pl-k"},{"start":19,"end":26,"cssClass":"pl-en"},{"start":27,"end":32,"cssClass":"pl-k"},{"start":45,"end":51,"cssClass":"pl-k"},{"start":63,"end":68,"cssClass":"pl-k"}],[{"start":4,"end":11,"cssClass":"pl-k"},{"start":12,"end":19,"cssClass":"pl-en"},{"start":24,"end":31,"cssClass":"pl-k"}],[],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":14,"cssClass":"pl-en"},{"start":17,"end":23,"cssClass":"pl-k"},{"start":24,"end":30,"cssClass":"pl-en"}],[{"start":0,"end":7,"cssClass":"pl-k"}],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":18,"cssClass":"pl-en"},{"start":19,"end":24,"cssClass":"pl-k"},{"start":37,"end":43,"cssClass":"pl-k"},{"start":55,"end":60,"cssClass":"pl-k"},{"start":61,"end":69,"cssClass":"pl-k"}],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":24,"end":25,"cssClass":"pl-c1"}],[{"start":8,"end":11,"cssClass":"pl-k"},{"start":13,"end":19,"cssClass":"pl-k"}],[],[],[{"start":8,"end":14,"cssClass":"pl-k"}],[],[],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":20,"cssClass":"pl-en"},{"start":23,"end":29,"cssClass":"pl-k"},{"start":30,"end":36,"cssClass":"pl-en"}],[{"start":0,"end":7,"cssClass":"pl-k"}],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":18,"cssClass":"pl-en"},{"start":19,"end":24,"cssClass":"pl-k"},{"start":37,"end":43,"cssClass":"pl-k"},{"start":55,"end":60,"cssClass":"pl-k"},{"start":61,"end":69,"cssClass":"pl-k"}],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":24,"end":25,"cssClass":"pl-c1"}],[{"start":8,"end":11,"cssClass":"pl-k"},{"start":13,"end":19,"cssClass":"pl-k"}],[],[],[{"start":8,"end":14,"cssClass":"pl-k"}],[],[],[],[{"start":0,"end":5,"cssClass":"pl-k"},{"start":6,"end":15,"cssClass":"pl-en"},{"start":18,"end":24,"cssClass":"pl-k"},{"start":25,"end":31,"cssClass":"pl-en"}],[{"start":0,"end":7,"cssClass":"pl-k"}],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":18,"cssClass":"pl-en"},{"start":19,"end":24,"cssClass":"pl-k"},{"start":37,"end":43,"cssClass":"pl-k"},{"start":55,"end":60,"cssClass":"pl-k"},{"start":61,"end":69,"cssClass":"pl-k"}],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":24,"end":25,"cssClass":"pl-c1"}],[{"start":8,"end":11,"cssClass":"pl-k"},{"start":13,"end":19,"cssClass":"pl-k"}],[{"start":22,"end":30,"cssClass":"pl-c1"},{"start":36,"end":37,"cssClass":"pl-c1"}],[],[{"start":8,"end":14,"cssClass":"pl-k"}],[],[],[],[{"start":0,"end":4,"cssClass":"pl-k"},{"start":5,"end":16,"cssClass":"pl-en"},{"start":17,"end":22,"cssClass":"pl-k"},{"start":46,"end":51,"cssClass":"pl-k"},{"start":68,"end":74,"cssClass":"pl-k"}],[{"start":18,"end":22,"cssClass":"pl-smi"}],[{"start":4,"end":6,"cssClass":"pl-k"},{"start":13,"end":20,"cssClass":"pl-c1"}],[{"start":20,"end":26,"cssClass":"pl-k"}],[{"start":8,"end":14,"cssClass":"pl-k"}],[{"start":8,"end":13,"cssClass":"pl-k"}],[{"start":20,"end":29,"cssClass":"pl-c1"}],[],[{"start":13,"end":18,"cssClass":"pl-c1"}],[],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":38,"end":45,"cssClass":"pl-c1"}],[],[{"start":36,"end":40,"cssClass":"pl-c1"}],[],[],[{"start":4,"end":8,"cssClass":"pl-k"}],[{"start":21,"end":43,"cssClass":"pl-s"},{"start":21,"end":22,"cssClass":"pl-pds"},{"start":42,"end":43,"cssClass":"pl-pds"}],[],[],[],[{"start":0,"end":3,"cssClass":"pl-k"},{"start":4,"end":8,"cssClass":"pl-en"},{"start":9,"end":12,"cssClass":"pl-k"},{"start":19,"end":23,"cssClass":"pl-k"}],[{"start":4,"end":6,"cssClass":"pl-k"},{"start":16,"end":17,"cssClass":"pl-c1"}],[{"start":21,"end":30,"cssClass":"pl-s"},{"start":21,"end":22,"cssClass":"pl-pds"},{"start":29,"end":30,"cssClass":"pl-pds"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":45,"end":78,"cssClass":"pl-s"},{"start":45,"end":46,"cssClass":"pl-pds"},{"start":77,"end":78,"cssClass":"pl-pds"}],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":15,"end":16,"cssClass":"pl-c1"}],[],[],[{"start":37,"end":38,"cssClass":"pl-c1"}],[{"start":4,"end":7,"cssClass":"pl-k"},{"start":21,"end":30,"cssClass":"pl-c1"},{"start":36,"end":37,"cssClass":"pl-c1"}],[],[],[],[],[],[],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":25,"end":26,"cssClass":"pl-c1"}],[],[],[{"start":4,"end":7,"cssClass":"pl-k"},{"start":9,"end":12,"cssClass":"pl-k"},{"start":17,"end":18,"cssClass":"pl-c1"}],[{"start":47,"end":53,"cssClass":"pl-s"},{"start":47,"end":48,"cssClass":"pl-pds"},{"start":52,"end":53,"cssClass":"pl-pds"},{"start":56,"end":70,"cssClass":"pl-c1"},{"start":76,"end":82,"cssClass":"pl-s"},{"start":76,"end":77,"cssClass":"pl-pds"},{"start":81,"end":82,"cssClass":"pl-pds"}],[{"start":8,"end":11,"cssClass":"pl-k"},{"start":29,"end":30,"cssClass":"pl-c1"},{"start":33,"end":34,"cssClass":"pl-c1"}],[],[{"start":8,"end":13,"cssClass":"pl-k"},{"start":31,"end":38,"cssClass":"pl-c1"},{"start":40,"end":74,"cssClass":"pl-c"},{"start":40,"end":42,"cssClass":"pl-c"}],[],[{"start":8,"end":14,"cssClass":"pl-k"}],[{"start":8,"end":12,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":12,"end":17,"cssClass":"pl-k"}],[{"start":8,"end":12,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":12,"end":17,"cssClass":"pl-k"}],[{"start":8,"end":12,"cssClass":"pl-k"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":12,"end":17,"cssClass":"pl-k"}],[],[],[{"start":8,"end":59,"cssClass":"pl-c"},{"start":8,"end":10,"cssClass":"pl-c"}],[{"start":8,"end":10,"cssClass":"pl-k"}],[{"start":25,"end":58,"cssClass":"pl-s"},{"start":25,"end":26,"cssClass":"pl-pds"},{"start":57,"end":58,"cssClass":"pl-pds"}],[{"start":12,"end":18,"cssClass":"pl-k"},{"start":19,"end":20,"cssClass":"pl-c1"}],[],[],[{"start":16,"end":28,"cssClass":"pl-c1"},{"start":52,"end":60,"cssClass":"pl-c1"},{"start":71,"end":79,"cssClass":"pl-c1"},{"start":94,"end":102,"cssClass":"pl-c1"}],[],[],[{"start":4,"end":7,"cssClass":"pl-k"}],[{"start":15,"end":19,"cssClass":"pl-c1"}],[],[],[{"start":18,"end":25,"cssClass":"pl-smi"},{"start":42,"end":52,"cssClass":"pl-s"},{"start":42,"end":43,"cssClass":"pl-pds"},{"start":51,"end":52,"cssClass":"pl-pds"}],[{"start":4,"end":6,"cssClass":"pl-k"},{"start":16,"end":23,"cssClass":"pl-c1"}],[],[{"start":24,"end":40,"cssClass":"pl-s"},{"start":24,"end":25,"cssClass":"pl-pds"},{"start":39,"end":40,"cssClass":"pl-pds"}],[{"start":32,"end":35,"cssClass":"pl-c1"}],[{"start":16,"end":21,"cssClass":"pl-c1"}],[],[{"start":4,"end":8,"cssClass":"pl-k"}],[{"start":21,"end":49,"cssClass":"pl-s"},{"start":21,"end":22,"cssClass":"pl-pds"},{"start":48,"end":49,"cssClass":"pl-pds"}],[{"start":8,"end":14,"cssClass":"pl-k"},{"start":15,"end":16,"cssClass":"pl-c1"}],[],[],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":11,"end":12,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/denisovamaria/colloquiums/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false,"repoAlertsPath":"/denisovamaria/colloquiums/security/dependabot","repoSecurityAndAnalysisPath":"/denisovamaria/colloquiums/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"colloquim2.cpp","displayUrl":"https://github.com/denisovamaria/colloquiums/blob/main/colloquims%20OS/Colloquim2/colloquim2.cpp?raw=true","headerInfo":{"blobSize":"3.39 KB","deleteInfo":{"deleteTooltip":"Fork this repository and delete the file"},"editInfo":{"editTooltip":"Fork this repository and edit the file"},"ghDesktopPath":"x-github-client://openRepo/https://github.com/denisovamaria/colloquiums?branch=main&filepath=colloquims%20OS%2FColloquim2%2Fcolloquim2.cpp","gitLfsPath":null,"onBranch":true,"shortPath":"8a39c2d","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fdenisovamaria%2Fcolloquiums%2Fblob%2Fmain%2Fcolloquims%2520OS%2FColloquim2%2Fcolloquim2.cpp","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"129","truncatedSloc":"110"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C++","languageID":43,"large":false,"loggedIn":true,"newDiscussionPath":"/denisovamaria/colloquiums/discussions/new","newIssuePath":"/denisovamaria/colloquiums/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/denisovamaria/colloquiums/blob/main/colloquims%20OS/Colloquim2/colloquim2.cpp","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/denisovamaria/colloquiums/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/denisovamaria/colloquiums/raw/main/colloquims%20OS/Colloquim2/colloquim2.cpp","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"denisovamaria","repoName":"colloquiums","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"Action","kind":"class","ident_start":146,"ident_end":152,"extent_start":140,"extent_end":275,"fully_qualified_name":"Action","ident_utf16":{"start":{"line_number":8,"utf16_col":6},"end":{"line_number":8,"utf16_col":12}},"extent_utf16":{"start":{"line_number":8,"utf16_col":0},"end":{"line_number":12,"utf16_col":1}}},{"name":"perform","kind":"method","ident_start":184,"ident_end":191,"extent_start":169,"extent_end":238,"fully_qualified_name":"Action::perform","ident_utf16":{"start":{"line_number":10,"utf16_col":19},"end":{"line_number":10,"utf16_col":26}},"extent_utf16":{"start":{"line_number":10,"utf16_col":4},"end":{"line_number":10,"utf16_col":73}}},{"name":"Addition","kind":"class","ident_start":286,"ident_end":294,"extent_start":280,"extent_end":533,"fully_qualified_name":"Addition","ident_utf16":{"start":{"line_number":14,"utf16_col":6},"end":{"line_number":14,"utf16_col":14}},"extent_utf16":{"start":{"line_number":14,"utf16_col":0},"end":{"line_number":23,"utf16_col":1}}},{"name":"perform","kind":"function","ident_start":334,"ident_end":341,"extent_start":327,"extent_end":530,"fully_qualified_name":"Addition::perform","ident_utf16":{"start":{"line_number":16,"utf16_col":11},"end":{"line_number":16,"utf16_col":18}},"extent_utf16":{"start":{"line_number":16,"utf16_col":4},"end":{"line_number":22,"utf16_col":5}}},{"name":"Multiplication","kind":"class","ident_start":544,"ident_end":558,"extent_start":538,"extent_end":797,"fully_qualified_name":"Multiplication","ident_utf16":{"start":{"line_number":25,"utf16_col":6},"end":{"line_number":25,"utf16_col":20}},"extent_utf16":{"start":{"line_number":25,"utf16_col":0},"end":{"line_number":34,"utf16_col":1}}},{"name":"perform","kind":"function","ident_start":598,"ident_end":605,"extent_start":591,"extent_end":794,"fully_qualified_name":"Multiplication::perform","ident_utf16":{"start":{"line_number":27,"utf16_col":11},"end":{"line_number":27,"utf16_col":18}},"extent_utf16":{"start":{"line_number":27,"utf16_col":4},"end":{"line_number":33,"utf16_col":5}}},{"name":"SquareSum","kind":"class","ident_start":808,"ident_end":817,"extent_start":802,"extent_end":1069,"fully_qualified_name":"SquareSum","ident_utf16":{"start":{"line_number":36,"utf16_col":6},"end":{"line_number":36,"utf16_col":15}},"extent_utf16":{"start":{"line_number":36,"utf16_col":0},"end":{"line_number":45,"utf16_col":1}}},{"name":"perform","kind":"function","ident_start":857,"ident_end":864,"extent_start":850,"extent_end":1066,"fully_qualified_name":"SquareSum::perform","ident_utf16":{"start":{"line_number":38,"utf16_col":11},"end":{"line_number":38,"utf16_col":18}},"extent_utf16":{"start":{"line_number":38,"utf16_col":4},"end":{"line_number":44,"utf16_col":5}}},{"name":"processFile","kind":"function","ident_start":1079,"ident_end":1090,"extent_start":1074,"extent_end":1646,"fully_qualified_name":"processFile","ident_utf16":{"start":{"line_number":47,"utf16_col":5},"end":{"line_number":47,"utf16_col":16}},"extent_utf16":{"start":{"line_number":47,"utf16_col":0},"end":{"line_number":65,"utf16_col":1}}},{"name":"main","kind":"function","ident_start":1654,"ident_end":1658,"extent_start":1650,"extent_end":3467,"fully_qualified_name":"main","ident_utf16":{"start":{"line_number":67,"utf16_col":4},"end":{"line_number":67,"utf16_col":8}},"extent_utf16":{"start":{"line_number":67,"utf16_col":0},"end":{"line_number":129,"utf16_col":0}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"accessAllowed":false,"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"copilotAccessAllowed":false,"csrf_tokens":{"/denisovamaria/colloquiums/branches":{"post":"mXjhM4RduYFe5r1D-7MakZCo69DOVX_x66Jm4hk3cYlaLxKl6yU-xtWYlAjcLCQIaTszRwh8JhncuvyZdVl8Cw"},"/repos/preferences":{"post":"OZ4JkhbSUTdqdIEEOxJ8WAxlI-hMiHbqUkRR4b0GQUg0zUMnN9HrqFdjUrW1ar5z9leTQVaztDbBH_7hcjde8Q"}}},"title":"colloquiums/colloquims OS/Colloquim2/colloquim2.cpp at main · denisovamaria/colloquiums"}