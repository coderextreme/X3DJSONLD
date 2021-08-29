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
    meta(content='Figure14_6ElevationGridMedallion.x3d',name='title'),
    meta(content='Figure 14.6, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch14/14fig06.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='19 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A medallion built from 12 ElevationGrid ribbons.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter14ElevationGrid/Figure14_6ElevationGridMedallion.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure14_6ElevationGridMedallion.x3d'),
    Viewpoint(description='Medallion',orientation=(1,0,0,-0.6),position=(0,60,120)),
    Group(
      children=[
      Group(DEF='ThreeRibbon',
        children=[
        Transform(DEF='OneRibbon',translation=(0,0,-2),
          children=[
          Inline(url=["Figure14_3ElevationGridRibbon.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter14ElevationGrid/Figure14_3ElevationGridRibbon.x3d","Figure14_3ElevationGridRibbon.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter14ElevationGrid/Figure14_3ElevationGridRibbon.wrl"])]),
        Transform(rotation=(0,1,0,0.52),
          children=[
          Transform(USE='OneRibbon')]),
        Transform(rotation=(0,1,0,1.05),
          children=[
          Transform(USE='OneRibbon')])]),
      Transform(rotation=(0,1,0,1.57),
        children=[
        Group(USE='ThreeRibbon')]),
      Transform(rotation=(0,1,0,3.14),
        children=[
        Group(USE='ThreeRibbon')]),
      Transform(rotation=(0,1,0,4.71),
        children=[
        Group(USE='ThreeRibbon')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure14_6ElevationGridMedallion.py")
