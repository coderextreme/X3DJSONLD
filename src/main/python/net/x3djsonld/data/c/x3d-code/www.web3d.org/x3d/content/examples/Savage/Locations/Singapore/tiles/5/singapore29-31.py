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
        texture=ImageTexture(url=['../../images/5/singapore29-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4654829221618253,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,1,3,5,10,15,19,22,27,32,35,35,32,27,22,18,15,14,14,14,14,13,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,-1,-1,0,1,3,7,13,16,20,25,31,35,36,35,31,26,21,18,17,16,15,15,14,12,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,-1,0,0,2,4,6,9,11,14,18,23,27,31,32,32,30,26,23,20,18,17,16,15,13,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,1,3,5,6,7,8,8,12,17,20,24,27,30,30,29,27,23,21,19,17,16,14,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,1,3,4,5,6,6,5,5,8,13,15,16,19,24,27,28,28,27,25,21,19,17,14,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,2,5,5,5,5,5,4,3,6,10,12,11,13,18,23,26,28,29,28,24,20,18,15,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,1,3,4,5,5,5,4,3,3,3,6,9,11,12,13,15,17,20,23,25,26,23,21,20,17,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,2,5,5,5,5,4,3,2,3,5,7,9,11,13,13,11,12,14,17,20,22,23,22,21,19,-1,-1,-1,-1,-1,-1,-1,0,0,1,3,4,5,5,5,4,3,3,2,4,6,9,11,11,12,10,8,8,9,12,15,17,19,20,20,18,-1,-1,-1,-1,-1,-1,-1,0,0,3,5,5,5,5,4,3,2,2,3,5,7,10,13,12,10,7,5,4,5,8,10,12,15,17,18,17,-1,-1,-1,-1,-1,0,0,1,3,4,5,5,5,4,3,2,2,2,4,7,9,11,12,10,7,5,4,4,5,6,7,9,12,14,15,16,-1,-1,-1,-1,-1,0,0,3,5,5,5,5,4,3,2,2,2,4,6,9,12,12,10,7,5,4,4,4,5,6,6,7,9,10,12,15,-1,-1,-1,0,0,1,3,4,5,5,5,4,3,2,2,2,3,6,9,11,12,10,7,5,4,4,4,5,5,5,5,5,7,9,11,13,-1,-1,-1,0,0,3,5,5,5,5,4,3,2,2,2,3,5,8,12,12,10,7,4,3,3,4,5,5,3,3,3,4,5,7,10,12,-1,0,0,1,2,4,5,5,5,4,3,2,2,2,3,5,8,10,11,10,7,5,4,3,4,4,4,3,2,1,1,2,4,6,9,11,-1,0,0,3,5,5,5,5,4,3,2,2,2,3,5,8,13,12,9,7,4,3,3,4,5,4,2,1,0,0,0,0,2,5,8,10,0,1,2,4,5,5,5,4,3,2,2,2,3,5,8,10,12,10,7,5,4,3,4,4,4,2,1,0,0,0,0,0,3,6,8,9,0,3,5,5,5,5,4,3,2,2,2,3,5,8,13,12,9,7,5,4,4,4,5,4,2,0,0,0,-1,-1,0,2,5,7,8,9,2,4,5,5,5,4,3,2,2,2,3,5,8,10,12,10,7,5,4,4,4,4,3,2,0,0,0,0,-1,0,0,1,3,5,6,7,5,5,5,5,4,3,2,2,2,3,5,8,13,12,9,7,4,3,4,4,5,4,1,0,0,0,-1,-1,0,0,0,1,1,2,4,7,5,5,5,4,3,2,2,2,3,5,8,10,12,10,7,5,4,3,4,4,4,2,0,0,0,-1,-1,-1,0,0,0,0,0,0,2,4,5,5,4,3,2,2,2,3,5,9,12,12,9,7,4,3,4,4,5,3,1,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,2],
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
