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
    meta(content='AnchorComparison.x3d',name='title'),
    meta(content='Anchor-node examples comparing HTML page launch, shifting Viewpoints, and loading another X3D scene.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='21 April 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='AnchorComparisonFrontViewpoint.png',name='Image'),
    meta(content='AnchorComparisonObliqueViewpoint.png',name='Image'),
    meta(content='Show Anchor link to Monterey Bay Aquarium web site for Kelp Forest exhibit',name='reference'),
    meta(content='http://www.mbayaq.org/efc/kelp.asp',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2005, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/AnchorComparison.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AnchorComparison.x3d'),
    Viewpoint(DEF='FrontView',description='Front view Anchor text',position=(0,0,8)),
    Viewpoint(DEF='AngledView',description='Side view Anchor text',orientation=(0,1,0,0.7854),position=(6,0,6)),
    Transform(translation=(0,2,0),
      #  First Anchor loads a web page 
      children=[
      Anchor(DEF='AnchorExample',description='Aquarium Exhibit Web Site',parameter=["target=_blank"],url=["http://www.montereybayaquarium.org/efc/kelp.asp"],
        children=[
        Shape(
          geometry=Text(string=["Click orange text to launch","Monterey Bay Aquarium","kelp forest HTML page"],
            fontStyle=FontStyle(DEF='LocalFontStyle',justify=["MIDDLE","MIDDLE"],size=0.6)),
          appearance=Appearance(
            material=Material(DEF='Autumn11',ambientIntensity=0.25641,diffuseColor=(0.795918,0.273554,0.006861),shininess=1,specularColor=(0.48655,0.319155,0.444036),
              #  Universal Media Library: Autumn 11 
              ))),
        #  Add transparent geometry over the text to make clicking (i.e. Anchor selection) easier 
        Shape(DEF='TransparentBoxForEasierUserSelection',
          geometry=Box(size=(6,2,0.02)),
          appearance=Appearance(
            material=Material(transparency=1)))])]),
    #  Second Anchor brings user to a different viewpoint 
    Transform(translation=(0,-0.25,0),
      children=[
      Anchor(description='Move view to diagonal Viewpoint',url=["#AngledView"],
        children=[
        Shape(DEF='AnchorMessage2',
          geometry=Text(string=["Click yellow text to move","to a diagonal Viewpoint"],
            fontStyle=FontStyle(USE='LocalFontStyle')),
          appearance=Appearance(
            material=Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0),shininess=0.02,specularColor=(0.678571,0.661796,0.528818),
              #  Universal Media Library: Metals 16 
              ))),
        Shape(USE='TransparentBoxForEasierUserSelection')])]),
    #  Third Anchor Launches Kelp Forest scene 
    Transform(translation=(0,-2,0),
      children=[
      Anchor(url=["../Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"],
        children=[
        Shape(DEF='AnchorMessage3',
          geometry=Text(string=["Click green text to load X3D","CoordinateAxes.x3d scene"],
            fontStyle=FontStyle(USE='LocalFontStyle')),
          appearance=Appearance(
            material=Material(ambientIntensity=0.25,diffuseColor=(0.315389,0.544,0.258052),shininess=0.5,specularColor=(0.456,0.456,0.456),
              #  Universal Media Library: Autumn 28 
              ))),
        Shape(USE='TransparentBoxForEasierUserSelection')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AnchorComparison.py")
