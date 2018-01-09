<!-- Font Awesome icons -->
<link href="https://opensource.keycdn.com/fontawesome/4.7.0/font-awesome.min.css" rel="stylesheet">
<!-- Update this to Font Awesome Pro 5 CDN when available -->
<script defer src="https://use.fontawesome.com/releases/v5.0.0/js/all.js"></script>
<script defer src="https://use.fontawesome.com/releases/v5.0.0/js/v4-shims.js"></script>
<!-- JQuery+JQuery UI -->
<link rel="stylesheet" href="https://code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css">
<script src="https://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>
<!-- JQuery UI Scripts -->
<script type="text/javascript">
$(document).ready(function() {
    $("#accordion:nth-child(1n)").accordion({
        collapsible: true,
        active: 'h3.open',
        heightStyle: "content"
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
<script type="text/javascript" src="https://cdn.datatables.net/1.10.16/js/jquery.dataTables.min.js"></script>
<!-- javascript for datatables -->
<script type="text/javascript">
<!--
// set up the dataTables
// Table A
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

// Table B
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

// Table C
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

// Table D
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

// Table E
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

// Table F
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

// Table G
$(document).ready(function() {
    var gtable = $('#table7').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience7').on('change', function() {
        gtable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor7').on('change', function() {
        gtable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear7').on('click', function clearFilter() {
        gtable
            .columns()
            .search('')
            .draw();
        $('#audience7').prop('selectedIndex', 0);
        $('#factor7').prop('selectedIndex', 0);
    });
});

// Table H
$(document).ready(function() {
    var htable = $('#table8').DataTable({
        "lengthMenu": [
            [10, 25, 50, -1],
            [10, 25, 50, "All"]
        ],
        "dom": '<"top"l<"clear">>rt<"bottom"ip<"clear">>'
    });

    // set up filter search fields
    $('#audience8').on('change', function() {
        htable
            .column(3)
            .search(this.value)
            .draw();
    });

    $('#factor8').on('change', function() {
        htable
            .column(4)
            .search(this.value)
            .draw();
    });

    // clear search filters button function, reset dropdown to 'selected' option
    $('#clear8').on('click', function clearFilter() {
        htable
            .columns()
            .search('')
            .draw();
        $('#audience8').prop('selectedIndex', 0);
        $('#factor8').prop('selectedIndex', 0);
    });
});
// -->
</script>
<!-- HR stylesheet -->
<!--#include virtual="/hr/include/style.inc" -->