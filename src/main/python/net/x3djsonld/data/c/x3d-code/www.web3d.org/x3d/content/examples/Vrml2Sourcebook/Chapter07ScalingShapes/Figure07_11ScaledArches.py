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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure07_11ScaledArches.x3d',name='title'),
    meta(content='Figure 7.11, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch07/07fig11.htm',name='reference'),
    meta(content='Don Brutzman',name='transcriber'),
    meta(content='9 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='An archway with smaller archways on each side created in translated, scaled coordinate systems. Also see Figures 6.10, 7.11 and 12.1 for comparison.',name='description'),
    meta(content='../Chapter06RotatingShapes/Figure06_10SimpleArch.x3d',name='reference'),
    meta(content='../Chapter12Inline/Figure12_1SimpleArch.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter07ScalingShapes/Figure07_11ScaledArches.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Note rotation of viewpoint is relative to initial default viewing direction along -Z axis 
    children=[
    WorldInfo(title='Figure07_11ScaledArches.x3d'),
    Viewpoint(description='View arches',orientation=(1,0,0,-0.2),position=(0,5,15)),
    Group(
      children=[
      Shape(DEF='Base',
        geometry=Box(size=(25,0.1,25)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.75,0.25)))),
      Group(DEF='Archway',
        children=[
        Transform(DEF='LeftColumn',translation=(-2,3,0),
          children=[
          Shape(DEF='COLUMN',
            geometry=Cylinder(height=6,radius=0.3),
            appearance=Appearance(DEF='GREY_SPECULAR_SHINY',
              material=Material(diffuseColor=(0.75,0.75,0.75),shininess=0.8,specularColor=(0.8,0.8,0.8))))]),
        Transform(DEF='RightColumn',translation=(2,3,0),
          children=[
          Shape(USE='COLUMN')]),
        Transform(DEF='ArchwaySpan',translation=(0,6.05,0),
          children=[
          Shape(
            appearance=Appearance(USE='GREY_SPECULAR_SHINY'),
            geometry=Box(size=(4.6,0.4,0.6)))]),
        Transform(DEF='LEFT_ROOF_TRANSFORM',rotation=(0,0,1,0.524),translation=(-1.15,7.12,0),
          children=[
          Shape(DEF='LEFT_ROOF_SHAPE',
            appearance=Appearance(USE='GREY_SPECULAR_SHINY'),
            geometry=Box(size=(2.86,0.4,0.6)))]),
        Transform(DEF='RIGHT_ROOF_TRANSFORM',rotation=(0,0,1,-0.524),translation=(1.15,7.12,0),
          children=[
          Shape(USE='LEFT_ROOF_SHAPE')])]),
      #  Careful choice of components makes it easy to multiply your content. 
      Transform(scale=(0.5,0.5,0.5),translation=(-4,0,0),
        children=[
        Group(USE='Archway')]),
      Transform(scale=(0.5,0.5,0.5),translation=(4,0,0),
        children=[
        Group(USE='Archway')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure07_11ScaledArches.py")
