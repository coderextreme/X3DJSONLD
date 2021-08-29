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
        texture=ImageTexture(url=['../../images/5/newport31-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,54,57,54,52,52,49,45,40,38,38,37,43,41,42,48,44,45,44,37,30,30,57,55,58,57,58,60,55,49,42,39,37,38,44,45,49,53,52,52,50,43,34,33,64,63,67,62,60,58,57,53,49,44,41,43,46,48,52,56,59,61,60,57,46,45,70,70,73,65,63,57,56,54,51,47,48,50,52,54,54,57,58,59,59,58,51,50,69,70,72,69,64,60,62,58,51,49,52,58,58,58,55,53,54,54,56,53,51,50,67,69,69,66,64,62,62,57,52,50,51,57,62,60,56,52,51,49,48,48,48,47,65,66,66,60,60,60,57,55,53,49,50,58,59,55,53,51,48,41,39,37,36,36,64,65,63,57,58,55,51,52,51,47,49,56,55,51,46,45,44,38,40,39,35,35,64,64,62,57,58,52,50,51,50,47,47,50,51,47,46,43,40,38,42,39,35,34,63,63,58,57,57,51,50,51,49,47,47,47,46,44,44,40,38,36,35,37,34,33,63,61,57,56,55,52,50,52,48,46,46,45,44,43,44,40,38,36,32,32,33,33,63,62,57,56,56,52,50,49,45,45,43,43,42,42,44,39,38,36,34,35,33,32,56,55,55,53,53,52,51,48,45,42,41,42,41,39,40,39,37,35,36,32,30,29,53,51,52,50,48,48,45,42,41,42,41,42,40,38,37,37,38,35,32,31,31,31,51,51,51,50,49,47,44,42,42,41,41,41,40,39,37,36,35,32,30,30,30,29,51,52,52,50,49,46,45,43,43,43,42,41,41,39,39,37,36,36,33,31,32,32,54,54,53,51,49,48,46,44,44,45,43,41,41,39,40,44,41,37,34,34,34,34,54,54,54,51,50,48,47,45,45,45,43,41,41,41,41,41,43,39,37,36,35,35,54,54,54,53,51,49,48,48,46,44,43,43,42,42,42,42,42,39,37,35,35,35,53,54,53,51,52,50,49,49,48,46,44,44,42,41,42,45,44,41,39,35,36,37,52,52,51,51,53,51,50,49,48,47,45,44,44,44,48,50,49,43,41,40,35,35,51,51,51,50,50,51,52,50,48,47,46,45,44,47,53,56,52,47,43,37,36,36,51,51,50,50,50,50,49,49,49,49,48,47,45,47,50,52,53,50,46,41,38,37,51,51,50,50,50,50,49,49,49,49,48,47,46,47,50,52,53,49,45,41,38,37],
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
