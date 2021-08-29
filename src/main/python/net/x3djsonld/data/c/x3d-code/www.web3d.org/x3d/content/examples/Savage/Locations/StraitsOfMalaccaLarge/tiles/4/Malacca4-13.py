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
        texture=ImageTexture(url=['../../images/4/Malacca4-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,105.95125062410463,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,3,4,4,4,4,4,3,4,2,2,4,3,3,3,4,5,3,1,1,2,3,4,3,3,4,4,4,4,3,3,3,4,2,3,3,3,3,3,3,4,1,0,0,3,2,4,4,3,4,4,2,3,3,3,4,3,3,2,1,1,5,1,0,0,0,4,3,2,3,3,2,2,4,3,4,5,4,3,3,3,3,2,3,1,1,0,1,3,1,2,4,2,2,2,3,3,4,4,5,4,5,2,3,1,2,3,5,2,2,2,2,2,2,1,4,5,3,3,2,4,4,5,3,5,2,0,0,0,3,2,1,1,2,1,2,3,3,3,3,3,4,3,3,3,2,2,2,1,2,3,1,1,1,8,2,3,1,4,3,3,3,2,1,4,2,2,3,2,1,3,1,0,5,1,1,4,4,2,2,1,3,3,3,2,3,1,1,1,3,2,1,0,2,1,5,3,2,4,5,3,1,3,1,1,1,1,2,1,1,3,3,1,1,2,2,3,2,5,4,6,4,6,6,5,3,1,3,1,2,2,1,1,0,2,1,2,0,0,1,4,3,6,6,5,2,3,4,2,3,1,3,1,0,4,1,1,0,0,3,0,2,4,1,6,6,4,4,3,5,3,3,3,0,1,4,19,1,2,0,1,0,0,2,2,2,8,4,5,6,5,4,2,1,5,3,1,3,17,8,23,30,7,1,2,1,2,3,6,5,3,5,5,3,4,1,5,3,-3,30,36,17,33,10,9,2,38,10,2,2,4,1,1,3,5,5,3,4,0,2,3,30,23,7,0,2,10,16,30,32,2,1,4,3,1,4,4,7,2,9,11,6,14,7,13,5,1,1,8,2,12,2,2,2,5,2,4,3,14,5,18,26,17,25,19,11,7,5,1,1,2,1,0,2,1,1,3,16,5,16,9,12,19,23,27,47,38,16,26,16,14,2,2,3,2,1,2,0,7,6,12,19,12,16,35,26,23,34,43,20,23,20,5,2,1,2,2,0,1,2,16,32,12,19,64,37,46,24,24,45,48,60,27,23,17,-3,2,2,1,2,3,3,18,37,15,23,68,32,49,26,27,52,51,58,25,23,17,-2,2,1,1,1,3,2],
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
