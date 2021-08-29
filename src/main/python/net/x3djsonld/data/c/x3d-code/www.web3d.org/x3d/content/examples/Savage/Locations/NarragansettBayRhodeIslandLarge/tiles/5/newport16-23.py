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
        texture=ImageTexture(url=['../../images/5/newport16-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,5,11,12,15,18,24,28,27,30,38,42,43,40,36,30,21,14,12,12,1,0,0,10,16,19,19,21,22,26,31,34,40,43,44,39,34,28,22,14,15,16,1,1,7,13,19,23,25,23,27,32,33,35,39,40,43,39,35,29,23,17,20,21,2,1,9,13,20,26,31,31,33,35,36,38,41,41,42,38,34,29,22,19,22,23,2,3,10,16,22,27,32,34,40,43,43,40,39,46,41,38,32,27,26,21,21,21,3,5,11,18,26,29,35,38,45,47,47,43,44,43,41,39,32,31,28,24,24,25,3,9,14,21,26,34,37,42,46,50,51,48,47,45,41,37,37,32,29,26,26,27,5,13,13,24,32,38,40,46,49,51,53,52,50,47,42,41,40,34,32,32,29,29,7,13,19,30,32,40,47,49,56,54,54,53,48,47,47,43,38,37,33,30,33,34,9,13,23,28,40,48,48,51,56,57,57,54,52,47,44,45,42,36,34,34,36,37,9,14,24,33,40,46,52,53,59,57,56,52,51,53,54,42,41,40,35,34,35,35,11,14,22,31,38,47,51,53,60,59,59,55,55,50,47,48,45,40,34,31,35,36,8,12,23,30,35,44,50,54,59,62,60,56,52,51,49,49,42,38,38,34,36,36,13,15,19,26,38,42,50,50,58,60,58,56,53,51,50,45,41,42,36,35,36,37,15,16,21,27,36,42,48,53,56,59,57,54,52,60,52,46,43,37,36,38,37,38,20,22,24,32,36,43,47,55,57,59,57,57,55,58,52,50,46,44,35,36,38,39,25,27,29,32,38,43,48,53,59,63,66,63,61,54,54,51,48,43,40,36,35,36,25,30,36,40,41,45,49,55,59,64,67,67,63,62,57,53,46,43,45,42,43,43,28,35,39,42,47,48,49,52,60,62,66,65,63,61,59,52,51,49,45,45,40,40,34,34,43,47,49,51,50,51,59,61,63,63,63,61,57,55,52,47,49,46,45,46,33,39,45,46,50,50,51,52,52,56,65,61,63,65,61,54,53,52,44,44,44,45,36,42,45,49,50,51,52,53,55,60,60,57,61,60,60,62,54,49,46,45,49,49,37,41,47,51,53,52,50,53,52,54,59,60,60,63,64,60,58,54,48,47,52,52,38,39,46,51,52,52,50,53,52,55,60,60,59,63,64,61,58,55,48,48,51,51],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
