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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore6-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,5,5,5,6,7,8,8,5,3,4,4,4,5,6,8,10,12,11,10,9,9,8,7,7,7,7,6,6,6,6,6,6,6,6,6,5,5,5,7,13,18,24,23,11,4,4,4,5,6,9,10,11,11,10,10,9,9,8,8,7,7,7,6,6,6,6,6,6,6,6,5,5,5,7,12,20,29,35,33,17,7,6,5,6,8,11,12,11,10,9,9,10,10,8,8,8,7,7,6,6,6,6,6,6,6,5,5,5,7,13,20,30,36,36,32,22,14,10,8,9,10,11,11,10,10,9,9,10,11,8,8,8,7,7,6,6,6,6,6,6,5,5,5,6,12,20,29,36,39,35,30,24,20,14,10,11,11,11,10,9,9,10,10,11,11,7,8,8,7,7,6,6,6,6,5,5,5,5,7,13,21,30,36,36,34,30,25,21,17,12,9,9,9,9,10,9,9,10,11,11,12,6,7,8,7,7,7,7,6,6,5,5,5,7,12,21,30,37,39,34,29,25,21,17,13,10,7,5,5,7,8,9,10,11,12,12,12,5,6,7,7,7,7,6,6,6,5,5,7,13,20,29,35,36,34,30,25,21,17,14,10,7,4,2,1,4,6,9,11,11,12,11,11,4,5,6,8,8,7,6,6,6,5,6,12,20,29,37,39,34,29,25,21,17,13,10,7,3,1,0,-2,1,4,8,11,12,12,11,11,4,4,5,8,9,9,8,6,6,8,12,20,29,35,36,34,30,25,21,17,14,10,7,3,1,0,-1,-1,0,3,8,12,11,11,11,11,4,4,4,8,10,10,9,7,6,11,19,29,37,39,34,29,25,21,17,13,10,7,3,1,-1,-2,-2,-1,0,1,7,11,11,11,11,12,6,4,3,4,5,7,8,9,11,19,28,34,37,35,30,25,21,17,13,10,7,3,1,0,-1,-2,-2,-1,0,0,4,8,10,11,12,12,8,5,2,1,1,3,7,11,17,27,37,39,34,30,25,21,17,13,10,7,3,1,-1,-2,-2,-2,-2,-1,0,0,2,5,8,11,12,12,8,6,3,1,1,4,9,15,21,29,34,34,29,25,20,17,13,10,7,3,1,0,-1,-2,-2,-2,-1,-1,-1,0,0,4,8,12,12,12,8,6,4,3,3,6,11,18,25,29,30,29,25,21,16,12,10,7,3,1,-1,-2,-2,-2,-2,-1,-1,-1,-1,0,0,2,7,11,12,12,9,7,6,6,7,10,15,21,26,26,22,20,17,15,12,9,6,3,1,0,-1,-2,-1,-1,-1,-1,0,0,0,0,0,0,5,8,9,10,10,9,8,8,10,14,20,24,27,22,14,10,10,9,9,7,3,1,-1,-2,-1,-1,-1,0,0,0,0,0,0,0,0,0,2,4,6,8,8,8,10,10,13,18,23,25,25,18,11,8,9,8,6,3,1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,5,7,10,13,15,22,28,26,22,15,9,8,8,7,3,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,3,5,7,10,13,16,21,24,22,17,13,10,9,8,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,5,7,10,13,17,18,18,16,13,12,12,11,8,6,3,3,4,3,1,1,1,1,0,0,0,0,0,0,0,0,0,1,3,5,4,3,8,10,13,15,16,15,14,12,10,9,11,9,7,4,2,2,4,4,3,2,2,1,1,1,1,1,1,1,1,1,1,1,3,5,4,4,11,14,16,16,15,13,10,8,6,7,9,7,5,2,0,0,2,4,4,4,3,2,2,2,1,1,1,1,1,1,1,2,3,3,4,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
