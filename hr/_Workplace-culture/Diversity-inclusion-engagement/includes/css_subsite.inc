<!-- This stylesheet is for custom styles and colours specific to your current sub-site only. Please use /hr/include/css.inc for global HR styles. -->

<style type="text/css">

/* Data tables */

  table.data {
      width: 100%;
      border-bottom: 1px solid #1b75bb;
  }

  table.data th {
      color: #fff;
      background-color: #1b75bb;
      font-size: 14px;
      padding: 5px;
  }

  table.data th, table.data td {
      padding: 0.25rem;
  }

  table.data tr:nth-child(2n+2) {
      background-color: rgba(192, 197, 196, 0.3);
  }

  table.data caption {
      font-size: 75%;
      text-align: left;
      caption-side: bottom;
      padding-top: 5px;
  }

  table.data tr.th2 {
      color: #0D4E95;
      font-size: 115%;
      font-weight: bold;
      background-color: #fff;
  }

  table.data tr.th2 td {
      padding-top: 10px;
  }

  /* Flexible grid **************************************/


  /* resets */

  *, *:before, *:after {
      box-sizing: border-box;
  }

  .clearfix:after {
      content: "";
      display: table;
      clear: both;
  }


  /* grid */

  .row {
      margin: 0 -10px;
      margin-bottom: 20px;
      width: 620px;
  }

  .row:last-child {
      margin-bottom: 0;
  }

  [class*="col-"] {
      padding: 5px 10px;
  }

  @media all and ( min-width: 670px) {
      .col-1-2 {
          float: left;
          width: 50%;
      }
      .col-1-3 {
          float: left;
          width: 33.33%;
      }
      .col-2-3 {
          float: left;
          width: 66.66%;
      }
      .col-1-4 {
          float: left;
          width: 25%;
      }
      .col-1-8 {
          float: left;
          width: 12.5%;
      }
  }
</style>
