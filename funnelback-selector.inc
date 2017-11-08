function clearInitial(el) {
    if (el.defaultValue==el.value)
        el.value = "";
}

function fbsearch(searchform, searchscope) {

    var agt=navigator.userAgent.toLowerCase();

    if (agt.indexOf("msie") == -1) {
        var scopeVal=document.forms[searchform].elements["scope"].value;
        var queryVal=document.forms[searchform].elements["query"].value;
    }
    else {
        var formObj=document.forms[searchform];
        var scopeVal=formObj("scope").value;
        var queryVal=formObj("query").value;
    }

    if (searchscope == "") {
        window.location = "http://search.health.qld.gov.au/s/search.html?collection=QHEPS_WWW&query=" + queryVal;
    }
    else {
        window.location = "http://search.health.qld.gov.au/s/search.html?collection=QHEPS_WWW&scope=" + searchscope + "&query=" + queryVal;
    }

}

function searchSelector() {
    var scopeVal = document.getElementById("scope").value;
    var queryVal = document.getElementById("query").value;

    window.location = "http://search.health.qld.gov.au/s/search.html?collection=QHEPS_WWW&scope=" + scopeVal + "&query=" + queryVal;
}
// adding ,scopeVal made search work, but populated "scopeVal" as scope value.
// same as reverting back to searchscope.
// retry with simpler get: var queryVal = document.getElementById("query").value;