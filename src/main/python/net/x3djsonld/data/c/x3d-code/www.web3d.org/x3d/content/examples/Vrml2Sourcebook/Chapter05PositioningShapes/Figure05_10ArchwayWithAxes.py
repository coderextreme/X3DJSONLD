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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure05_10ArchwayWithAxes.x3d',name='title'),
    meta(content='Figure 5.10, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch05/05fig10.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='8 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Building an archway using multiple, translated coordinate systems, with coordinate axes superimposed to show X3D/VRML directions',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter05PositioningShapes/Figure05_10ArchwayWithAxes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure05_10ArchwayWithAxes.x3d'),
    Viewpoint(description='View Arch from posiiton 0 6 20, looking downward',orientation=(1,0,0,-0.2),position=(0,6,20)),
    Viewpoint(description='Default viewpoint at (0 0 10) has poor visibility on ground plane visibility, higher viewpoint preferred.'),
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='GREY_SPECULAR_SHINY',
          material=Material(shininess=0.8,specularColor=(0.8,0.8,0.8))),
        geometry=Box(size=(25,0.1,25))),
      Transform(translation=(-2,3,0),
        children=[
        Shape(
          appearance=Appearance(USE='GREY_SPECULAR_SHINY'),
          geometry=Cylinder(height=6,radius=0.3))]),
      Transform(translation=(2,3,0),
        children=[
        Shape(
          appearance=Appearance(USE='GREY_SPECULAR_SHINY'),
          geometry=Cylinder(height=6,radius=0.3))]),
      Transform(translation=(0,6.05,0),
        children=[
        Shape(
          appearance=Appearance(USE='GREY_SPECULAR_SHINY'),
          geometry=Box(size=(4.6,0.4,0.6)))])]),
    #  Adding this Inline reference to another scene superimposes X3D/VRML coordinate system axes. 
    Transform(scale=(7,7,7),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure05_10ArchwayWithAxes.py")
