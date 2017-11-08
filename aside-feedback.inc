<!-- BEGIN Feedback section -->
<div class="sidebar_section">
    <h3 class="sidebar">HR site feedback</h3>
    <div class="hr-form bg-faint-blue">
        <!-- Begin form code-->
        <form action="http://qheps.health.qld.gov.au/_common/form.aspx" method="post" onsubmit="return validate_form(this)">
            <!-- Set email address where form will go -->
            <input name="form_email" type="hidden" value="jason.shanks@health.qld.gov.au" />
            <!-- Set the email subject -->
            <input name="form_subject" type="hidden" value="HR Branch site feedback" />
            <!-- Set 'from' email address -->
            <input name="form_from" type="hidden" value="HRSOnline@health.qld.gov.au" />
            <!-- Redirect user to success page -->
            <input name="form_redirect" type="hidden" value="/hr/feedback-send-success.htm" />
            <!-- Option to store data as CSV -->
            <input name="form_data" type="hidden" value="1" />
            <div id="r4f_form_wrapper">
                <div width="100%" class="r4f_forms">
                    <input name="Page URL" type="hidden" id="hiddenURL" value="" />
                    <p>Was this page helpful?
                        <input type="radio" name="helpful" value="Helpful" class="fa-check">
                        <label><span><i class="fa fa-smile-o fa-2x" aria-hidden="true"></i></span></label>
                        <input type="radio" name="helpful" value="Not Helpful" class="fa-check">
                        <label><span><i class="fa fa-frown-o fa-2x" aria-hidden="true"></i></span></label>
                    </p>
                    <textarea cols="40" rows="4" name="message" placeholder="How could this page be improved? Too little or too much info? Did you find what you were looking for?"></textarea>
                    <input type="checkbox" name="reply" value="Reply requested">
                    <label><span></span>I would like a reply</label>
                    <input name="your_email" type="text" placeholder="Your email address" />
                    <input id="submit-button" name="submit" type="submit" value="Submit" />
                </div>
            </div>
        </form>
    </div>
</div>
<!-- END Feedback section -->