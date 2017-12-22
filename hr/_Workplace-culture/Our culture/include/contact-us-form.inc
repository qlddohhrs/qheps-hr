<!-- Begin form code-->
<div class="hr-form">
    <form action="http://qheps.health.qld.gov.au/_common/form.aspx" method="post" onsubmit="return validate_form(this)">
        <!-- Set email address where form will go -->
        <input name="form_email" type="hidden" value="SPARKChange@health.qld.gov.au" />
        <!-- Set the email subject -->
        <input name="form_subject" type="hidden" value="Culture enquiry" />
        <!-- Set 'from' email address -->
        <input name="form_from" type="hidden" value="SPARKChange@health.qld.gov.au" />
        <!-- Redirect user to success page -->
        <input type="hidden" value="/hr/culture/sparks/contact-us/send-success.htm" />
        <!-- Option to store data as CSV -->
        <input name="form_data" type="hidden" value="1" />
        <div id="r4f_form_wrapper">
            <div width="100%" class="r4f_forms">
                <input name="full_name" type="text" placeholder="Full name" />
                <br>
                <select name="your_subject" size="0">
                    <option value="blank">- Please select the nature of your enquiry -</option>
                    <option>Idea for Sparks</option>
                    <option>Report a broken link</option>
                    <option>General feedback</option>
                    <option>Website feedback</option>
                    <option>Callback</option>
                </select>
                <br>
                <input name="your_email" type="text" placeholder="Email address" />
                <br>
                <input name="your_phone" type="text" placeholder="Phone number (work or mobile)" />
                <br>
                <textarea cols="200" rows="3" name="message" placeholder="Your message"></textarea>
                <br>
                <input name="form_redirect" type="hidden" value="http://qheps.health.qld.gov.au/hr/culture/sparks/send-success.htm" />
                <input id="submit-button" name="submit" type="submit" value="Submit" />
            </div>
        </div>
    </form>
</div>