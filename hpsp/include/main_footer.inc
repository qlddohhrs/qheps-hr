<!--START CUSTOM FOOTER /hr/include/main_footer.inc-->
<!-- Font Awesome icons -->
<link href="https://opensource.keycdn.com/fontawesome/4.7.0/font-awesome.min.css" rel="stylesheet">
<!-- JQuery+JQuery UI -->
<link rel="stylesheet" href="https://code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
<!-- FIX: This newer version JQuery is breaking bx-slider and Training Calendar: <script src="https://code.jquery.com/jquery-1.12.4.js"></script> -->
<script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>
<!-- JQuery UI Scripts -->
<script type="text/javascript">
$(document).ready(function() {
    $("#accordion:nth-child(1n)").accordion({
        heightStyle: "content",
        active: false,
        collapsible: true
    });
});
</script>
<!-- Obtain URL of page for Feedback form -->
<script type="text/javascript">
$(document).ready(function() {
    document.getElementById("hiddenURL").value = document.URL;
});
</script>
<!-- bxslider carousel scripts -->
<!--#include virtual="/hr/include/bxslider/bxslider.min.css.inc" -->
<!--#include virtual="/hr/include/bxslider/bxslider.min.js.inc" -->
<script type="text/javascript">
$(document).ready(function() {
    $('.bxslider').bxSlider({
        auto: true,
        randomStart: true,
        pause: 8000,
        controls: false
    });
});
</script>
<!-- javascript for dataTable plug ins: Training calendar and ? -->
<script type="text/javascript" src="https://cdn.datatables.net/1.10.11/js/jquery.dataTables.min.js"></script>
<!-- javascript for datatables -->
<script type="text/javascript">
<!--
// set up the dataTables
$(document).ready(function() {
    var atable = $('#table1').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience1').on('change', function() {
        atable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor1').on('change', function() {
        atable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear1').on('click', function clearFilter() {
        atable
            .columns()
            .search('')
            .draw();
        $('#audience1').prop('selectedIndex', 0);
        $('#factor1').prop('selectedIndex', 0);
    });

});

$(document).ready(function() {
    var btable = $('#table2').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience2').on('change', function() {
        btable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor2').on('change', function() {
        btable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear2').on('click', function clearFilter() {
        btable
            .columns()
            .search('')
            .draw();
        $('#audience2').prop('selectedIndex', 0);
        $('#factor2').prop('selectedIndex', 0);
    });

});

$(document).ready(function() {
    var ctable = $('#table3').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience3').on('change', function() {
        ctable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor3').on('change', function() {
        ctable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear3').on('click', function clearFilter() {
        ctable
            .columns()
            .search('')
            .draw();
        $('#audience3').prop('selectedIndex', 0);
        $('#factor3').prop('selectedIndex', 0);
    });

});

$(document).ready(function() {
    var dtable = $('#table4').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience4').on('change', function() {
        dtable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor4').on('change', function() {
        dtable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear4').on('click', function clearFilter() {
        dtable
            .columns()
            .search('')
            .draw();
        $('#audience4').prop('selectedIndex', 0);
        $('#factor4').prop('selectedIndex', 0);
    });

});

$(document).ready(function() {
    var etable = $('#table5').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience5').on('change', function() {
        etable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor5').on('change', function() {
        etable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear5').on('click', function clearFilter() {
        etable
            .columns()
            .search('')
            .draw();
        $('#audience5').prop('selectedIndex', 0);
        $('#factor5').prop('selectedIndex', 0);
    });

});

$(document).ready(function() {
    var ftable = $('#table6').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience6').on('change', function() {
        ftable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor6').on('change', function() {
        ftable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear6').on('click', function clearFilter() {
        ftable
            .columns()
            .search('')
            .draw();
        $('#audience6').prop('selectedIndex', 0);
        $('#factor6').prop('selectedIndex', 0);
    });

});

// -->
</script>
<!-- Stylesheets -->
<!--#include virtual="/hr/include/style.inc" -->
<!--#include virtual="/purchasing-performance/include/style-hpsp.inc" -->
<!--END CUSTOM FOOTER-->
<table width="100%" border="0" cellpadding="0" cellspacing="0" id="footer">
    <tr>
        <td><img src="/masters/menu/library/images/footer_qld_logo.gif" alt="Queensland Government | Queensland Health"></td>
        <td align="right"><strong><A href="http://qheps.health.qld.gov.au/masters/disclaimer.htm">Disclaimer</A> | <A href="http://qheps.health.qld.gov.au/masters/feedback.htm">Comments</A> | <A href="http://qheps.health.qld.gov.au/eps/pub_info.htm">Publishing</A> | <A href="http://qheps.health.qld.gov.au/masters/training.htm">Training<br><br></A>Copyright &copy; Queensland Government</strong></td>
    </tr>
    <tr>
        <td height="5"></td>
        <td height="5"></td>
    </tr>
    <tr>
        <td>Please note that any material printed is regarded as an uncontrolled copy. It is the responsibility of the person printing the document to refer frequently to QHEPS for updates.</td>
        <td align="right">For General HR enquiries contact:
            <a href="mailto:HRConnect@health.qld.gov.au"> HR Connect</A>
            <br>Human Resources, Corporate Services Division
        </td>
    </tr>
</table>
<!--END CUSTOM FOOTER-->