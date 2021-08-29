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
    meta(content='AnchorExample.x3d',name='title'),
    meta(content='Anchor example using the Kelp Forest world.',name='description'),
    meta(content='Leonard Daly, Don Brutzman and Marlon Heron',name='creator'),
    meta(content='14 November 2005',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='Show Anchor link to Monterey Bay Aquarium web site for Kelp Forest exhibit',name='reference'),
    meta(content='KelpForestLiveWebCam.jpg',name='Image'),
    meta(content='http://www.montereybayaquarium.org/animals-and-experiences/live-web-cams/kelp-forest-cam',name='reference'),
    meta(content='http://www.montereybayaquarium.org/animals-and-experiences/exhibits/kelp-forest',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2005, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/AnchorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Anchor.x3d'),
    Transform(translation=(0,8,30),
      children=[
      Viewpoint(description='view Anchor text',position=(0,-1,12)),
      Transform(translation=(-2.25,0,0),
        children=[
        Anchor(DEF='AnchorExample',description='Aquarium Exhibit Web Site',parameter=["target=_blank"],url=["http://www.montereybayaquarium.org/animals-and-experiences/exhibits/kelp-forest"],
          children=[
          Shape(
            geometry=Text(string=["Click orange text for","Monterey Bay Aquarium","kelp forest web site"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
            appearance=Appearance(
              material=Material(DEF='Autumn11',ambientIntensity=0.25641,diffuseColor=(0.795918,0.273554,0.006861),shininess=1,specularColor=(0.48655,0.319155,0.444036)))),
          #  Add transparent geometry over the text to make clicking (i.e. Anchor selection) easier 
          Shape(
            geometry=Box(size=(6,2,0.02)),
            appearance=Appearance(
              material=Material(transparency=1)))])]),
      Transform(translation=(3.25,0,0),
        children=[
        Anchor(DEF='WebCamAnchor',description='Click to see Kelp Forest Live Web Cam',parameter=["target=_blank"],url=["http://www.montereybayaquarium.org/animals-and-experiences/live-web-cams/kelp-forest-cam"],
          children=[
          Transform(scale=(0.938,0.729,1),
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],solid=False,
                coord=Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])),
              appearance=Appearance(
                #  Image Size Is 938x729 Pixels 
                texture=ImageTexture(url=["KelpForestLiveWebCam.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/KelpForestLiveWebCam.jpg"])))])])])]),
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

print ("python x3d.py load successful for AnchorExample.py")
