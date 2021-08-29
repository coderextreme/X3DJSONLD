###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

children=[
xml(
  children=[
  File(HRef=v3_document.htm),
  File(HRef=preview.wmf),
  File(HRef=v3_next_active.gif),
  File(HRef=v3_next_disabled.gif),
  File(HRef=v3_prev_active.gif),
  File(HRef=v3_prev_disabled.gif),
  File(HRef=v3_outline_collapse.gif),
  File(HRef=v3_outline_expand.gif),
  File(HRef=v3_space.gif),
  File(HRef=v3_endshow.htm),
  File(HRef=v3_navigation_bar.htm),
  File(HRef=v3_outline_navigation_bar.htm),
  File(HRef=v3_outline_collapsed.htm),
  File(HRef=v3_outline_expanded.htm),
  File(HRef=v3_slide0003_notes_pane.htm),
  File(HRef=v3_blank_notes.htm),
  File(HRef=v3_slide0002_notes_pane.htm),
  File(HRef=v3_slide0004_notes_pane.htm),
  File(HRef=master03.htm),
  File(HRef=master03.x3d),
  File(HRef=master02.htm),
  File(HRef=pres.x3d),
  File(HRef=editdata.mso),
  File(HRef=v3_slide0003.htm),
  File(HRef=v3_slide0012.htm),
  File(HRef=v3_slide0005.htm),
  File(HRef=v3_slide0006.htm),
  File(HRef=v3_slide0014.htm),
  File(HRef=v3_slide0014_image001.jpg),
  File(HRef=v3_slide0016.htm),
  File(HRef=v3_slide0016_image002.gif),
  File(HRef=v3_slide0013.htm),
  File(HRef=v3_slide0013_image003.gif),
  File(HRef=v3_slide0009.htm),
  File(HRef=v3_slide0009_background.jpg),
  File(HRef=v3_slide0010.htm),
  File(HRef=v3_slide0010_background.jpg),
  File(HRef=v3_slide0010_image004.gif),
  File(HRef=v3_slide0007.htm),
  File(HRef=v3_slide0007_background.gif),
  File(HRef=v3_slide0015.htm),
  File(HRef=v3_slide0015_image005.gif),
  File(HRef=v3_slide0011.htm),
  File(HRef=v3_slide0011_background.jpg),
  File(HRef=v3_slide0011_image006.gif),
  File(HRef=v3_slide0008.htm),
  File(HRef=v3_slide0008_image007.gif),
  File(HRef=v3_slide0002.htm),
  File(HRef=v3_slide0002_image008.gif),
  File(HRef=v3_slide0002_image009.gif),
  File(HRef=v3_slide0002_image010.gif),
  File(HRef=v3_slide0004.htm),
  File(HRef=v3_slide0017.htm),
  File(HRef=slide0003.htm),
  File(HRef=slide0012.htm),
  File(HRef=slide0005.htm),
  File(HRef=slide0006.htm),
  File(HRef=slide0014.htm),
  File(HRef=slide0014_image011.png),
  File(HRef=slide0016.htm),
  File(HRef=slide0016_image013.png),
  File(HRef=slide0016_image014.jpg),
  File(HRef=slide0013.htm),
  File(HRef=slide0013_image015.png),
  File(HRef=slide0013_image017.png),
  File(HRef=slide0009.htm),
  File(HRef=slide0009_image018.png),
  File(HRef=slide0009_image020.png),
  File(HRef=slide0010.htm),
  File(HRef=slide0010_image021.png),
  File(HRef=slide0010_image023.png),
  File(HRef=slide0007.htm),
  File(HRef=slide0007_image024.wmz),
  File(HRef=slide0007_image025.png),
  File(HRef=slide0015.htm),
  File(HRef=slide0015_image026.png),
  File(HRef=slide0015_image027.png),
  File(HRef=slide0011.htm),
  File(HRef=slide0011_image029.png),
  File(HRef=slide0011_image031.png),
  File(HRef=slide0011_image033.png),
  File(HRef=slide0008.htm),
  File(HRef=slide0002.htm),
  File(HRef=slide0002_image034.png),
  File(HRef=slide0002_image035.wmz),
  File(HRef=slide0002_image036.png),
  File(HRef=slide0004.htm),
  File(HRef=slide0017.htm),
  File(HRef=master01.htm),
  File(HRef=master03_stylesheet.css),
  MainFile(HRef=../InstallingCortonaBrowserAsPowerpointControl.html),
  File(HRef=error.htm),
  File(HRef=fullscreen.htm),
  File(HRef=outline.htm),
  File(HRef=notes_flag.gif),
  File(HRef=buttons.gif),
  File(HRef=frame.htm),
  File(HRef=script.js),
  File(HRef=filelist.x3d)])]
###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
