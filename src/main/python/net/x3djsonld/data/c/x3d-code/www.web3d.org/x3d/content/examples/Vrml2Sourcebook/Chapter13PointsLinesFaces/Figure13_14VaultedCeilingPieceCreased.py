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
    meta(content='Figure13_14VaultedCeilingPieceCreased.x3d',name='title'),
    meta(content='Figure 13.14, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch13/13fig14.htm',name='reference'),
    meta(content='Don Brutzman and Colleen Case',name='translators'),
    meta(content='16 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A nonsolid vaulted ceiling piece.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter13PointsLinesFaces/Figure13_14VaultedCeilingPieceCreased.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure13_14VaultedCeilingPieceCreased.x3d'),
    Shape(
      appearance=Appearance(
        material=Material(),),
      geometry=IndexedFaceSet(coordIndex=[0,13,14,1,-1,1,14,15,2,-1,2,15,16,3,-1,3,16,17,4,-1,4,17,18,5,-1,5,18,19,6,-1,6,19,20,7,-1,7,20,21,8,-1,8,21,22,9,-1,9,22,23,10,-1,10,23,24,11,-1,11,24,25,12,-1],solid=False,
        #  Circular arc, then angled circular arc 
        coord=Coordinate(point=[(-1.0,0.0,1.0),(-1.0,0.26,0.97),(-1.0,0.5,0.87),(-1.0,0.71,0.71),(-1.0,0.87,0.5),(-1.0,0.97,0.26),(-1.0,1.0,0.0),(-1.0,0.97,-0.26),(-1.0,0.87,-0.5),(-1.0,0.71,-0.71),(-1.0,0.5,-0.87),(-1.0,0.26,-0.97),(-1.0,0.0,-1.0),(-1.0,0.0,1.0),(-0.97,0.26,0.97),(-0.87,0.5,0.87),(-0.71,0.71,0.71),(-0.5,0.87,0.5),(-0.26,0.96,0.26),(0.0,1.0,0.0),(-0.26,0.96,-0.26),(-0.5,0.87,-0.5),(-0.71,0.71,-0.71),(-0.87,0.5,-0.87),(-0.97,0.26,-0.97),(-1.0,0.0,-1.0)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure13_14VaultedCeilingPieceCreased.py")
