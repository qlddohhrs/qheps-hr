# QLD Department of Health QHEPS Human Resources Online Communications

This folder contains all of the code used on varies sites of the Queensland Department of Health QHEPS Intranet Corporate Services Division (CSD). This began as a project of the Human Resources Online Communications group, but is now branching out to the rest of CSD and some other branches. This is the entirety of code that is responsible for the  templates  and code snippets developed for the deployment of a consistent look and feel. This is comprised of:

* Top-level include folder that includes:
	* Homepage aside and quick_links
	* Main Secondary navigation visible under the Branch names
	* Section navigation sidenavs for all top-level secondary nav areas
	* Global components for all other asides (search, feedback, etc.)
	* Scripts for added features such as: image carousel slider, Font Awesome icon repo
	* Global stylesheet: style.inc (which is the base for all other areas using these templates, and after the main Dept stylesheets).
	* Footer: main_footer.inc + main_footer-custom.inc (also globally referenced in all other relevant areas)

> **IMPORTANT:** the **style.inc** and **main_footer-custom.inc** files are master files that control the appearance and related scripts for HR, HPSP and gradually all other sections of Corporate Services Division on QHEPS. Consequently, any changes to these immediately effect all of these areas. Some consultation may be needed for any major changes and after sufficient testing.

## Contacts
* Lead author: [Jason Shanks, Senior Web Advisor](mailto:jason.shanks@health.qld.gov.au)
* Area Supervisor: [Johanna Brands, Principal Advisor](mailto:johanna.brands@health.qld.gov.au)
* Managed by: [Human Resources Online Communications](mailto:HRSOnline@health.qld.gov.au)
