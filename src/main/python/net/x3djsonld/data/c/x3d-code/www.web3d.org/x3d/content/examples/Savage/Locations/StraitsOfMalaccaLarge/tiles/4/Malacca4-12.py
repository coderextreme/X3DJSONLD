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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca4-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[17,20,29,19,20,13,7,19,11,6,19,16,12,10,27,9,13,15,5,2,3,3,15,17,35,13,11,7,6,10,12,33,24,24,28,34,27,11,4,7,4,2,3,4,12,16,18,14,12,7,5,7,13,30,30,15,14,24,20,12,5,4,2,5,2,3,12,15,13,17,20,19,8,7,28,27,32,21,21,22,6,6,4,4,4,2,4,4,18,14,18,20,35,17,10,9,13,16,6,21,31,23,14,12,7,5,4,2,2,3,16,17,16,12,17,15,11,11,10,9,6,11,15,14,17,24,8,6,5,2,3,2,14,16,12,9,17,14,13,12,8,7,6,5,7,7,9,10,8,6,4,8,3,1,11,11,11,7,11,14,12,9,7,5,6,5,6,7,7,6,5,6,6,3,2,8,10,12,11,7,10,12,16,13,7,7,7,7,6,8,6,6,5,5,5,5,11,4,5,6,6,3,7,32,8,7,7,24,8,8,5,6,6,8,5,6,7,8,5,4,6,7,13,10,21,32,10,16,20,31,7,7,6,6,5,5,8,5,10,8,6,6,12,6,7,8,20,27,22,23,19,17,10,8,9,7,5,8,4,5,6,6,6,6,9,6,9,14,10,10,8,12,13,14,13,11,6,6,4,6,5,6,6,6,6,6,17,5,7,9,11,10,7,9,10,12,18,18,7,5,5,6,6,5,6,5,10,8,6,6,10,7,9,10,8,7,6,7,8,10,15,7,5,5,5,6,6,5,5,6,10,10,6,8,6,8,7,7,6,8,9,11,9,6,7,8,9,9,6,6,6,4,7,8,8,9,7,7,7,5,7,6,6,9,14,11,12,12,11,10,3,5,4,4,4,9,11,7,8,6,7,4,5,6,7,13,13,12,13,12,11,7,4,5,5,5,2,9,5,6,6,9,6,8,7,8,17,12,13,12,12,11,8,5,5,7,4,3,4,5,7,6,7,6,7,7,6,9,10,12,8,11,8,8,7,6,4,5,2,7,4,4,5,7,7,4,5,5,8,10,10,7,6,6,7,6,6,17,6,4,21,16,5,7,5,7,5,5,5,5,9,10,11,7,7,5,7,6,6,17,5,4,21,18],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
