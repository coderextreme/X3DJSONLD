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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Figure13_16VaultedCeiling.x3d',name='title'),
    meta(content='Figure 13.16, The VRML 2 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch13/13fig16.htm',name='reference'),
    meta(content='Don Brutzman and Colleen Case',name='translators'),
    meta(content='29 July 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A vaulted ceiling piece used repeatedly to build part of a medieval building.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter13PointsLinesFaces/Figure13_16VaultedCeiling.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure13_16VaultedCeiling.x3d'),
    Viewpoint(description='Vaulted ceiling',orientation=(1,0,0,-0.758),position=(0,8,7)),
    Group(
      children=[
      Transform(DEF='Ceiling',translation=(0,2,0),
        children=[
        Inline(DEF='Vault',url=["Figure13_15VaultedCeilingPiece.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter13PointsLinesFaces/Figure13_15VaultedCeilingPiece.x3d","Figure13_15VaultedCeilingPiece.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter13PointsLinesFaces/Figure13_15VaultedCeilingPiece.wrl"]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Inline(USE='Vault')]),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Inline(USE='Vault')]),
        Transform(rotation=(0,1,0,-1.57),
          children=[
          Inline(USE='Vault')])]),
      Transform(translation=(-2,0,0),
        children=[
        Transform(USE='Ceiling')]),
      Transform(translation=(2,0,0),
        children=[
        Transform(USE='Ceiling')]),
      Transform(translation=(0,0,-2),
        children=[
        Transform(USE='Ceiling')]),
      Transform(translation=(0,0,2),
        children=[
        Transform(USE='Ceiling')]),
      Transform(translation=(-3,1,-1),
        children=[
        Shape(DEF='Column',
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))),
          geometry=Cylinder(radius=0.05))]),
      Transform(translation=(-1,1,-1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(1,1,-1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(1,1,-1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(3,1,-1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(-3,1,1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(-1,1,1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(1,1,1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(3,1,1),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(-1,1,-3),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(-1,1,3),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(1,1,-3),
        children=[
        Shape(USE='Column')]),
      Transform(translation=(1,1,3),
        children=[
        Shape(USE='Column')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure13_16VaultedCeiling.py")
