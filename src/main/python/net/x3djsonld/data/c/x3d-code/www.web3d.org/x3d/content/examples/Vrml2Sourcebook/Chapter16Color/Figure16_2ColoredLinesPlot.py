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
    meta(content='Figure16_2ColoredLinesPlot.x3d',name='title'),
    meta(content='Figure 16.2, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch16/16fig02.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='25 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A line plot with the polylines colored using colors from a Color node.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter16Color/Figure16_2ColoredLinesPlot.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure16_2ColoredLinesPlot.x3d'),
    Viewpoint(description='View points',position=(5,4,10)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),emissiveColor=(1,1,1))),
        geometry=IndexedLineSet(coordIndex=[0,1,-1,0,2,-1],
          coord=Coordinate(point=[(0,0,0),(10,0,0),(0,8,0)]))),
      Shape(
        #  # no appearance, use emissive coloring via Color node 
        geometry=IndexedLineSet(colorIndex=[0,1],colorPerVertex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,-1,10,11,12,13,14,15,16,17,18,19,-1],
          coord=Coordinate(point=[(1,1,0),(2,4,0),(3,5,0),(4,4,0),(5,6,0),(6,7,0),(7,5,0),(8,6,0),(9,4,0),(10,3,0),(1,3,0),(2,2,0),(3,2,0),(4,1,0),(5,2,0),(6,4,0),(7,3,0),(8,5,0),(9,5,0),(10,6,0)]),
          color=Color(color=[(0,1,0),(1,1,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure16_2ColoredLinesPlot.py")
