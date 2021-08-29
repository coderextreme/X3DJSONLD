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
        texture=ImageTexture(url=['../../images/5/singapore27-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4480194974058374,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[23,15,9,5,6,9,10,12,16,21,24,25,21,14,10,9,10,12,14,15,14,12,10,9,8,7,7,7,8,9,9,7,5,4,5,7,30,22,14,8,8,11,12,14,18,22,25,26,21,14,10,8,9,10,12,14,13,12,11,10,8,7,7,8,9,11,11,7,4,2,2,5,34,31,19,9,8,10,12,15,18,19,20,20,17,12,9,8,8,9,11,13,14,13,11,10,8,7,7,10,13,16,15,8,4,3,4,7,33,31,20,9,7,9,12,15,17,17,16,15,13,10,9,9,9,9,11,14,14,14,12,10,8,7,8,12,15,17,16,9,4,4,6,8,25,22,13,5,6,10,13,14,15,14,12,11,10,10,10,11,11,11,13,15,16,14,12,10,9,8,9,14,16,16,14,9,6,6,8,8,18,15,8,3,5,10,12,13,12,11,10,9,9,10,12,13,13,12,13,16,16,14,12,10,9,9,10,13,15,14,11,9,7,7,8,9,13,9,5,3,6,9,11,12,11,10,9,9,10,11,13,13,13,12,13,16,16,14,12,11,10,9,9,11,11,9,8,8,8,7,7,7,9,6,4,5,7,10,11,11,10,10,9,9,11,12,13,14,13,12,13,15,15,14,12,11,10,8,8,8,7,6,6,7,8,8,7,7,8,7,6,6,7,8,9,9,9,9,9,9,11,12,13,13,13,13,14,15,14,13,11,10,9,7,7,6,6,6,7,8,10,10,10,9,8,7,7,7,7,8,8,8,8,9,9,9,11,12,12,12,13,15,15,15,14,12,10,9,8,7,6,5,6,7,8,10,11,12,12,11,8,7,7,7,8,8,8,8,8,8,8,9,10,11,12,12,14,17,17,16,14,12,10,9,8,7,6,6,7,8,10,10,11,12,13,12,7,7,7,7,8,9,8,8,8,8,8,8,9,11,12,13,16,18,18,16,14,12,11,9,8,7,7,7,8,10,11,11,11,12,13,13,6,7,7,7,8,8,7,7,7,7,8,8,10,13,15,17,18,19,18,15,13,11,11,10,9,9,8,8,9,11,12,11,11,12,13,13,5,7,7,7,8,7,6,6,6,7,8,9,12,16,19,21,21,19,17,14,12,11,10,10,10,9,9,9,10,11,12,12,12,12,13,12,7,8,8,7,7,6,6,6,7,8,8,10,14,19,23,27,26,22,18,14,12,11,10,10,10,10,10,10,11,12,12,12,12,12,13,12,8,9,8,6,5,5,6,7,8,8,9,11,15,21,27,31,29,23,18,14,12,12,11,10,9,10,11,11,11,12,12,11,11,12,13,13,8,9,6,4,2,2,5,8,8,9,9,10,14,19,23,27,26,21,18,15,14,13,13,12,11,11,11,11,12,13,13,13,13,14,14,14,8,9,5,1,0,1,4,8,9,8,8,10,13,17,20,23,22,19,17,16,15,15,14,14,13,13,12,12,13,14,15,14,14,15,16,15,7,7,5,2,1,2,5,8,9,9,10,11,13,16,18,20,20,19,19,18,17,16,15,15,15,14,14,13,13,14,15,14,15,16,16,16,5,5,4,3,4,5,7,9,10,11,11,12,14,16,17,17,18,20,20,20,19,16,16,16,16,16,15,14,14,14,15,15,16,17,17,17,7,6,5,4,5,5,6,7,8,10,12,13,15,17,17,17,18,21,23,24,22,18,17,17,17,16,15,14,14,14,15,17,18,18,18,18,8,7,6,5,6,6,6,6,6,8,12,16,18,18,18,17,19,22,26,28,26,20,18,19,18,16,15,14,14,15,16,18,19,19,19,19],
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
