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
        texture=ImageTexture(url=['../../images/5/singapore24-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4218243602718554,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[12,12,14,15,15,15,15,15,16,16,15,13,12,11,11,12,12,12,12,12,12,11,9,6,5,7,7,8,8,8,8,7,6,7,7,8,12,13,13,14,14,13,14,15,15,16,15,14,12,12,11,10,10,10,11,12,12,12,10,7,6,7,7,8,8,7,7,7,7,7,8,9,11,12,13,13,12,12,13,14,15,15,15,14,13,12,11,9,9,10,11,13,13,12,11,8,7,7,7,8,8,7,7,7,7,8,9,10,9,10,10,10,10,10,11,12,13,15,16,15,14,13,12,11,11,11,12,14,14,13,11,9,8,8,8,8,8,8,8,8,9,9,10,11,7,8,9,10,9,9,10,11,13,15,15,16,15,14,13,12,12,13,13,14,14,13,11,9,9,10,9,8,8,8,8,9,9,10,10,11,7,7,9,10,11,11,11,12,13,14,15,15,15,14,14,13,13,14,13,12,11,9,8,9,10,10,9,8,7,7,8,7,8,9,9,10,7,7,8,10,11,11,12,12,13,13,14,15,15,14,14,13,13,14,13,11,9,7,7,9,10,10,9,7,6,7,7,7,7,8,9,10,6,6,7,9,10,11,11,12,12,12,13,13,13,12,11,12,12,13,12,11,10,8,8,9,10,10,8,5,4,5,6,6,7,7,8,9,6,6,6,8,9,10,11,11,11,11,12,12,11,10,10,10,11,12,12,11,10,10,10,11,11,10,8,3,1,2,4,6,6,6,7,8,6,6,6,7,7,8,9,10,10,11,10,10,10,9,9,10,10,11,11,10,9,9,10,12,13,12,10,6,3,2,3,4,5,6,7,7,6,6,6,6,6,7,8,9,10,10,10,9,8,8,8,9,10,11,10,10,9,9,11,14,16,14,11,8,5,2,1,2,4,5,6,6,7,7,7,7,7,7,8,9,9,9,9,10,10,10,10,11,11,11,12,12,14,17,20,23,23,19,15,12,8,5,3,2,2,3,5,6,8,8,7,7,7,7,7,8,8,9,9,10,11,12,13,13,12,12,13,15,19,25,29,32,31,25,20,15,11,8,5,2,1,2,3,5,9,8,7,7,6,6,6,7,8,9,10,11,12,12,13,14,14,14,19,28,37,43,44,41,36,31,26,21,16,12,8,5,3,2,2,3,9,8,7,7,6,6,6,6,7,9,10,12,12,12,14,15,15,15,25,42,54,61,59,49,42,37,32,26,21,16,11,8,5,2,1,2,8,8,7,7,6,6,6,6,7,8,10,11,11,12,15,18,20,20,28,42,53,60,61,57,51,45,39,32,27,21,16,12,8,5,3,2,7,8,7,7,6,6,6,6,7,8,9,10,11,12,16,22,24,25,31,40,49,57,62,64,61,53,46,39,32,26,21,16,12,9,6,4,7,8,7,6,6,6,6,7,7,8,8,8,9,12,16,21,24,25,31,38,47,55,61,64,63,59,54,46,39,33,27,21,18,19,22,27,7,7,7,6,6,7,7,7,7,7,7,6,8,11,14,18,22,25,29,35,43,53,59,62,64,65,61,54,46,39,32,26,25,31,41,52,6,7,7,7,7,8,7,6,6,5,4,5,6,9,12,16,20,23,27,31,38,48,55,60,63,65,64,59,54,46,40,36,37,44,54,63,6,7,7,8,8,8,7,5,3,2,2,3,5,6,9,13,17,21,24,26,32,41,50,58,62,63,64,64,61,53,47,46,48,56,64,68,6,6,7,7,8,8,6,4,2,1,1,2,3,4,7,10,14,18,21,24,28,34,41,50,55,56,57,56,53,47,44,44,49,58,65,68],
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
