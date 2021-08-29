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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='InlineKelpForest.x3d',name='title'),
    meta(content='Inline example that loads the Kelp Forest world.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='19 October 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D profile must be Immersive, rather than Interactive, in order to set up the X3D player to properly support the contained Inline scene KelpForestMain.x3d which has profile Immersive.',name='info'),
    meta(content='../KelpForestExhibit/KelpForestMain.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/InlineKelpForest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  The following url is an ordered list of multiple addresses that support the following use cases. 
    #  Use case: (1a) .x3d on local disk or (1b) web server query looks on local server 
    #  Use case: (2) Older VRML97 browser unable to read X3D, reads .wrl version instead (backwards compatibility) 
    #  Use case: (3) local copy not available, retrieve from permanent server address 
    #  Use case: (4) combination of cases (2) and (3), VRML97 on remote server 
    #  TODO consider simpler scene to illustrate Inline, also consider adding Viewpoint 
    children=[
    WorldInfo(title='InlineKelpForest.x3d'),
    Inline(url=["../KelpForestExhibit/KelpForestMain.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.x3d","../KelpForestExhibit/KelpForestMain.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for InlineKelpForest.py")
