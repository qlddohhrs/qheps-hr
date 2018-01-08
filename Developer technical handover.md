# QHEPS HR Developer Technical handover

The [Web design guide](http://qheps-dev.dctuat.health.qld.gov.au/hr/online/web-design-guide.htm) has been developed for Publishers to give a full overview of the styles and HTML snippets that have been created to apply our uniform style to their content.

Beyond this, the main style.inc stylesheet has further custom styles broken down into commented sections.

## Key elements of the TeamSite file structure

### /mostSubdirectoryFolders
* _includes – contains files that assemble the Aside_Right-column of each section such as:
	* right_column.inc – the shell file that assembles all parts of the Aside
	* quick_links.inc – the only component that is custom for each section

[See the Web design guide for full details on how these are put together.]

### /include
This master folder includes the bulk of CSS, scripts and modular components used throughout the site. Milestone versions of it are checked-in to: https://github.com/qlddohhrs/qheps-hr-includes

* /bx-slider – support folder for the carousel used on the home page
* XXXX-sidenav.inc – these various files are the section navigation menus visible in the left-column of each page. They have a standard UL format. The included IDs and classes: ```nav2, sidebar, nav2xc``` are necessary for the style as designed.
* aside-feedback.inc – universal feedback section included at the bottom of every right_column. It automatically grabs the current page that it's submitted from using javascript and includes in the feedback email.
* home-right_column.inc – this is the right-column used on the HR home and About HR Branch pages.
* home-slider.inc – this is the include containing all images/text that comprises the carousel used at the top of the HR home page.
* links-template.inc, right_column-template.inc – these files are referenced in the Web design guide as template files to use when building up a new Aside.
* main_footer-custom.inc – Custom Footer scripts added and referenced from here.
* main_footer.inc – this is the base footer content specified by Online services for use on all HR pages.
* main_secnav.inc – This file controls the Main Secondary navigation menu found underneath the Branch hame (begins with HR home...). [See dedicated section Custom main_secnav.inc for more details]
* master-quick_links.inc, master-right_column.inc – seldom used but wherever a section doesn't have it's own Aside these files are referenced.
* master-search.inc – universal HR search section included at the top of every right_column.
* master_sidenav.inc, right_column.inc, search.inc – not used any more.
* recruitment-sidenav2.inc – currently in development and to replace recruitment-sidenav.inc once the revised pages go live.
* style-live.inc – as improvements are made to the main stylesheet and reach publishing milestones, a copy is saved here as a backup to fallback to if need be.
* style.inc – master custom stylesheet. Commented Headings before each section of this should bring clarity to where they apply in heirarchy from Macro down to the micro details.
* style_archives.inc – this is a graveyard for styles no longer in use.

> IMPORTANT: The main_footer-custom.inc and style.inc files are master files that control the appearance and related scripts for HR, HPSP and gradually all other sections of Corporate Services Division on QHEPS. Consequently, any changes to these immediately effect all of these areas. Some consultation may be needed for any major changes and after sufficient testing.    


### Style.inc overview
* resets: for now, mostly for box-sizing that applies to the responsive grids
* Main content blocks:
	* Body, Navigation-Top
	* Navigation-Section/sidenav (left-column)
		* Sliding menu (in testing, slide-out menu for Section nav in mobile view)
	* Aside (right-column)
	* Quick links (used in Aside and homepage section nav)
	* Footer
* Basic HTML Elements
* Image options
	* full width
	* magnify
* Page Banners
* Custom components:
	* Floats
	* CSS tables
	* Contact lists
	* Data tables
	* Calendar (Training, etc.)
	* Boxes (Alerts, Feature)
	* Vertical Accordions (JQueryUI)
	* Vertical flowcharts (fix with iconfont)
	* Policy Metadata
	* Responsive grids
	* Forms
		* Checkboxes & Radio buttons #addtoWDG
	* Buttons (similar to Bootstrap)
	* Embedded Videos (Youtube/Vimeo)
	* Slideshows (bx-slider)
	* Footnotes
	* Countdown timer (not in use, was for annual W4Q campaign)
	* Font Awesome customisations
	* Colours (fore/background classes offered in Web design guide)
	* Miscellaneous styles
		* hide (display:none;)
			* 	figcaption
	* Just for fun
	* Responsive Media Queries
		* includes some early experimentation with using the .hideme class already in the main QHEPS template to hide the Section nav and trigger with a slide-out from button idea.
	* A group of unused styles never seen used anywhere in 2017 (might relocated to style_archive in case needed in future)

### Custom Footer overview
#### Font Awesome icons
Currently the Font Awesome framework is being referenced through their CDN link with the recent addition of their FA5 update scripts that include Shims for backwards compatibility with FA4.
Ideally post-Squiz migration, this library would be incorporated locally and using the Font Awesome 5 Pro complete version that we are now paying for. Latest version can be downloaded by signing in at [FontAwesome.com](https://fontawesome.com).
In the interim, a CDN link for Font Awesome 5 Pro is  in their development pipeline and would be a one line swap in the **custom-footer.inc** file.
#### JQuery UI
The standard JQuery UI styles and script support features such as the Accordions.
#### URL of current page
This custom javascript get’s the current page URL and passes it to the Feedback form embedded in the Aside of each page of HR.
#### BX-Slider
These scripts and global options support the carousel used on the HR homepage. If used elsewhere and different options are needed, the global ones can be overridden on that specific page.
#### dataTable options
These scripts were initially included to support the Training Calendar. They are duplicated 8 times to allow for up to 8 months listed at a time.
> The duplication of these could probably be condensed into a loop to save space and improve page load time.    
 

### Custom main_secnav.inc
These secondary navigation menu files are normally created in TeamSite using the wizard generator that clicking Edit brings up.. To circumvent this and use a custom file (as we are currently doing), follow these steps initially.. All subsequent edits to this file by Importing (instead of Editing) will publish fine without being over-written by the templatedata file.

1. In TeamSite, navigate to and rename the equivalent templatedata file to anything else (suggest appending `_old`):
```
\templatedata\navigation\qhepsSecondaryMenu\data\hr\include\mainsec_nav.inc
```
2. Externally create your new `main_secnav.inc` file. You can refer to existing one’s in `/hr/include/main_secnav.inc`, or if making an empty file that simply links to another nav like HR’s, refer to `/paris/include/main_sevnav.inc` for an example.
3. Import your manually created `mainsec_nav.inc` file and overwrite the existing one.
4. Submit the `mainsec_nav.inc` to publish to live as per usual.

## Javascript dependencies

* Newer versions of JQuery break the current versions of bx-slider and Training Calendar datatables. <script src="https://code.jquery.com/jquery-1.12.4.js"></script> and later.

## Publishing process
TeamSite itself has some simplified versioning with the features of:
* saving previous version states
* document steps for saving version control

## Post-Squiz

### Styles to update

* `#nav2 {margin: 0 15px;}` CHANGE TO `{margin: 15px;}`
* At the top of `#contentblock30` in the QHEPS template, an extra <p> is inserted. Not sure if this can be removed from the new Squiz asset for this but it would be ideal for consistent alignment of all 3 sections.

### Issues
* Carousel pagers
* Nav2 not collapsing, Accordion expand/collapse caret also not displaying – I believe these 2 issues are related, potentially the top few lines of the custom footer code that was being cut-off.
	* UPDATE: confirmed this external stylesheet was not loaded: <link rel="stylesheet" href="https://code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
* Font Awesome icons not displaying – confident this was rectified by removing an offending comment line in ‘main_footer-custom.inc’
* Secondary nav display issue (partial green background) – confident this was rectified with instantiation of a custom ‘main_sec.inc’ file that removed all the previous styles from top.


### Files to rename or re-organise
Squiz has the advantage of both:
* respecting and allowing proper file name extensions
* treating any file as an asset number. Renaming an asset should have little consequence (i.e. not breaking anywhere else they are referenced). 

A lot of the clean-up we have wanted to do during the course of using TeamSite but was somewhat prohibitive by it not being supporting or too much extra effort involved. This includes:
* all .inc files that should actually be .css or .js for example.
* page names for consistency across the site
* moving folders and documents around for consistency (i.e. docs, images folders out of global folder, etc.) Squiz is not particular about the visual organisational structure as everything is just an Asset number.

### Files to re-separate
The following files especially would be best to separate back in to individual components after the migration to Squiz Matrix. Reason being that the migration scripts apparently will combine into one file, any files that are a combination of include files that only TeamSite understands.

### Main Footer
The main footer will end up combining:
* the base footer content
* the Custom-Footer file – this file should be separated as it was prior to migration which would include:
	* main_footer-custom.inc – this file (asset) needs to be re-linked from any other area that is using HR styles as this is the Global version which in turn references the master stylesheet below as well).
	* any included TeamSite virtual links that will need converting to Squiz-friendly normal style and script links.
	* link to the style.inc (style.css) asset.
* the custom Stylesheet (style.inc) which should be separated and renamed correctly as style.css

### Asides
The right-column asides consist of the following parts that should be separately, especially before any changes are made to the global parts. There should still only be one for each section they are created for which totals around 30.
* right_column-XXXX.inc – the framework file that includes branding (logos top and bottom) and the references all the included assets below.
* master-search.inc – global search component
* quick_links-XXXX.inc – this is the custom component that includes each section’s Supporting resources, Related links, Need more help contacts
* aside-feedback.inc – the global feedback component
- - - -
## LiveCycle Designer Tips
* Window menu>Layout for adjusting spacing, positioning of field captions, etc.
* To Save as a PDF that can be filled and re-saved in Adobe Reader:
	* Save as normal
	* re-open in Adobe Acrobat Pro
	* Select Save as > Reader Extended PDF > Enable Additional Features
	* Save again.
* To create Yes/No radio buttons that are connected but only one can be selected:
	* Make sure each radio button field is Grouped together with unique names from each other and other similar groups on the form.
	* In the Object>Binding tab, uncheck Specify Item Values. 

- - - -
Prepared by: Jason Shanks
Last updated: 2018-01-08 09:40