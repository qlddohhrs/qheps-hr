<style type="text/css">
/*## Vertical Accordions - CSS only, no javascript. limited functionality. */

div.accordion {
    display: block;
    width: 100%;
    padding: 0.5em 0em 1px;
    margin: 0 auto;
}

div.accordion div {
    display: block;
    width: 100%;
    height: 2.8em;
    padding: 0;
    margin: 0;
    border-bottom: #84c447 1.8px solid;
    overflow: hidden;
}

div.accordion div h3 {
    font-size: 18px;
    font-weight: normal;
    width: 100%;
    line-height: 2em;
    padding: 0 5px;
    margin: 0 0 10px 0;
    color: #84c447;
    background: #fff url(/hr/images/list_icons/icon_expand-green.png) 99% no-repeat;
}

div.accordion div h3 a {
    display: block;
    width: 100%;
    line-height: 2em;
    text-decoration: none;
    color: inherit;
    outline: 0 none;
}

div.accordion div:target {
    height: auto;
    background-color: #fff;
}

div.accordion div:target h3 {
    font-size: 18px;
    color: #fff;
    background: #84c447;
    /*url(/hr/images/list_icons/icon_contract-white.png) 99% no-repeat*/
}

div.accordion div,
div.accordion div h3 {
    -webkit-transition: all 0s ease;
    -moz-transition: all 0s ease;
    -ms-transition: all 0s ease;
    -o-transition: all 0s ease;
    transition: all 0s ease;
}

div.accordion div>p {
    padding: 0 10px;
}
</style>