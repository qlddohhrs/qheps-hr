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



/*## Vertical Flowcharts */


/* This was a neat CSS drawing experiment but didn't display consistently cross-browser. Replaced with use of Font Awesome icons */

.triangle-down {
    width: 50px;
    -webkit-transform: rotate(225deg);
    height: 50px;
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, transparent), color-stop(.5, transparent));
    position: absolute;
    bottom: -25px;
    left: 43%;
}

.triangle-up {
    width: 50px;
    -webkit-transform: rotate(45deg);
    height: 50px;
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, transparent), color-stop(.5, transparent));
    position: absolute;
    top: -25px;
    left: 43%;
}

.blue-grad-1 .triangle-down {
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, #ebf5fd), color-stop(.5, transparent));
}

.blue-grad-2 .triangle-down {
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, #d4eafb), color-stop(.5, transparent));
}

.blue-grad-3 .triangle-down {
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, #bddff8), color-stop(.5, transparent));
}

.blue-grad-4 .triangle-down {
    background: -webkit-gradient(linear, 0 0, 100% 100%, color-stop(.5, #a6d4f6), color-stop(.5, transparent));
}



/*# Old styles removed as not found to be used anytime from late 2016 */

.hrs_forms input {
    width: 250px;
}

.hrs_forms .hrs_textarea input {
    width: 350px;
    height: 100px;
}

#form_wrapper {
    background: url(/hr/images/contact_page/contact-bg.gif) left no-repeat;
    padding: 0 0 0 70px;
    height: 450px;
}

#side_ads {
    position: absolute;
    left: 25px;
    top: 420px;
    height: 200px;
    width: 152px;
    display: block;
    z-index: 999;
}

#side_ad_2 {
    height: 79px;
    width: 152px;
    display: block;
    margin: 20px 0;
}

#side_ad_1 {
    height: 79px;
    width: 152px;
    display: block;
    margin: 10px 0;
}

a.readmore {
    float: right;
    clear: both;
    display: block;
    width: 75px;
    text-align: center;
    background: #afcc99;
    padding: 3px 5px;
    color: #000;
    font-size: 11px;
    font-weight: bold;
    -moz-border-radius: 5px;
}

.front_box_tr {
    clear: both;
    width: 100%;
}

.front_box_bg {
    display: block;
    width: 210px;
    height: 98px;
    background: url(/hr/images/front_box/front_box_bg.gif) bottom left no-repeat;
    position: relative;
    float: left;
}

.front_box_image {
    position: absolute;
    top: 37px;
    left: 15px;
}

img.front_box_image {
    border: 1px solid #999;
}

h3.front_box_bullet {
    display: block;
    width: 100%;
    height: 18px;
    position: absolute;
    top: 0px;
    left: 5px;
    font-size: 13px;
    padding: 0 0 0 15px;
    color: #6591c8;
    background: url(/hr/images/front_box/front_box_bullet.gif) left no-repeat;
}

.front_box_bullet a:link,
.front_box_bullet a:visited {
    color: #406463;
}

#front_box_links {
    position: absolute;
    top: 30px;
    left: 75px;
    width: 125px;
    color: #666;
}

#front_box_links p {
    font-size: 10px;
}

#front_box_links a {
    font-size: 10px;
    color: #3399cc;
    text-decoration: none;
}

#front_box_links a:hover {
    text-decoration: underline;
}

p.more-info-hook a .section-heading {
    display: block;
    padding: 2px 0 2px 20px;
    margin: 0;
    text-decoration: none;
    background: url(/hr/images/quick_links/down_arrow.gif) left no-repeat;
}

p.more-info-hook a {
    text-decoration: none;
    font-weight: bold;
}

ul.resources {
    margin: 0;
    padding: 0;
}

.resources li {
    list-style: disc;
    margin: 0 0 0 15px;
    padding: 0;
    color: #999;
}

.resources li a {
    padding: 0;
    margin: 2px 0;
}

.entry_slider_left,
.entry_slider_right {
    width: 250px;
    padding: 5px;
}

.entry_slider_left .more-information,
.entry_slider_right .more-information {
    background: #ededed;
    border: 1px solid #ccc;
}

.entry_slider_left .resources li a {
    display: block;
    padding: 2px 4px;
    margin: 2px 0;
    text-decoration: none;
    border: 1px solid #ddd;
    background: #fafafa;
    text-align: center;
}

.entry_slider_right .resources li a {
    display: block;
    padding: 2px 4px;
    margin: 2px 0;
    text-decoration: none;
    border: 1px solid #ddd;
    background: #fafafa;
    text-align: center;
}

#entry_slider .section-heading {
    font-size: 14px;
    color: #2986a3;
}




/* END old style */
</style>