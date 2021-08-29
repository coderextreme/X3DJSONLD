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
        texture=ImageTexture(url=['../../images/4/Malacca4-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,106.96200067211268,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,1,1,0,1,1,1,2,2,3,3,3,2,2,2,3,2,3,2,2,3,1,0,0,0,1,0,2,2,2,2,3,2,3,3,3,2,2,1,1,1,2,2,2,0,1,1,2,3,3,2,2,4,2,3,1,0,1,2,2,2,1,2,4,2,2,1,1,2,2,3,2,2,3,3,3,2,2,2,1,2,2,3,3,2,3,3,3,2,1,1,1,2,2,2,3,3,2,1,2,3,2,2,2,1,1,2,3,2,3,1,1,1,3,3,3,5,2,4,2,2,3,2,1,2,2,2,4,2,3,2,3,1,2,3,3,2,3,3,1,2,3,3,2,3,1,2,1,3,2,2,3,2,1,1,3,3,2,2,3,1,1,3,1,2,2,3,3,3,2,2,3,2,2,2,2,2,2,3,2,1,2,2,3,1,3,2,2,4,2,3,2,2,2,2,2,2,3,4,2,1,2,2,2,2,0,2,0,1,1,0,0,1,4,2,0,2,2,1,2,3,2,3,2,2,2,3,3,3,3,2,1,7,2,13,4,4,4,2,2,2,1,1,1,2,2,1,2,3,1,3,2,1,1,5,2,11,39,159,33,9,2,1,9,2,3,3,2,1,3,2,2,3,2,2,1,2,16,10,22,24,5,7,4,15,9,3,3,3,2,2,1,3,2,1,5,0,0,1,3,28,33,28,7,10,16,25,27,2,1,3,3,2,4,1,2,1,2,0,0,0,9,27,34,59,29,17,30,13,26,1,1,1,2,2,3,2,2,1,2,8,1,1,0,13,22,25,41,22,28,48,43,2,2,0,5,1,3,1,1,0,20,21,2,1,5,7,24,46,29,48,29,21,28,1,2,4,1,1,2,2,0,0,14,15,5,2,1,10,32,21,31,32,44,55,57,0,2,2,1,1,2,0,0,2,15,0,2,0,0,11,12,22,35,152,189,38,30,2,1,2,0,0,1,0,2,0,1,0,2,2,0,6,10,31,53,44,29,17,24,3,1,0,2,1,2,0,1,2,1,2,1,1,2,5,12,54,55,59,19,21,21,2,2,0,1,1,1,0,2,1,1,1,1,1,1,7,15,53,50,76,20,26,23],
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
