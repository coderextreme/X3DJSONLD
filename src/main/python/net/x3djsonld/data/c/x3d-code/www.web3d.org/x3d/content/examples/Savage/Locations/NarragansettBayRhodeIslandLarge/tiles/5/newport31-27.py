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
        texture=ImageTexture(url=['../../images/5/newport31-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,40,41,42,42,42,44,44,42,40,38,39,39,40,39,38,37,38,44,45,47,47,39,39,39,40,40,41,43,45,45,42,38,37,37,38,37,38,40,41,44,46,50,50,39,37,38,38,39,40,41,43,45,42,39,38,37,37,37,40,42,41,41,47,51,51,37,36,37,38,38,39,40,41,43,42,40,38,37,37,37,41,42,40,42,49,52,52,36,36,37,37,38,39,40,41,42,43,41,39,37,37,37,38,39,40,42,46,49,50,35,36,37,37,38,39,41,42,41,41,42,40,41,39,37,37,37,38,40,42,43,43,37,36,37,37,38,40,42,42,41,40,42,39,38,37,37,36,37,41,40,40,40,40,39,37,37,38,38,41,43,41,40,39,38,36,35,35,35,35,35,37,38,39,38,38,41,37,37,38,40,43,44,42,40,39,38,35,34,34,34,34,34,34,35,36,36,36,42,40,38,40,43,45,44,42,41,38,35,35,35,34,34,34,34,33,33,33,33,33,43,42,41,43,45,45,44,43,42,38,34,34,34,34,35,34,34,34,35,34,32,32,44,43,43,45,46,46,45,45,44,37,34,34,34,34,35,39,36,34,33,33,32,32,44,44,44,47,47,46,44,42,41,35,37,36,34,35,37,38,35,33,32,31,30,30,48,47,46,50,49,47,45,42,41,38,37,43,39,38,37,39,36,32,32,31,30,30,49,49,50,53,52,50,48,47,45,42,39,39,41,45,41,39,42,36,36,33,31,31,50,50,54,55,53,53,51,48,46,45,41,40,41,43,43,46,43,40,40,37,31,31,54,54,57,57,56,54,52,49,47,45,44,42,43,44,48,50,48,46,42,36,38,38,57,57,60,59,58,55,53,53,50,45,47,46,47,49,55,60,51,48,46,41,33,33,60,61,63,62,59,57,57,56,53,50,50,52,54,55,52,57,56,51,47,45,42,41,61,64,67,65,63,61,60,58,55,52,52,53,56,58,55,58,55,50,49,46,42,41,63,65,68,67,64,63,62,60,57,55,54,55,57,57,57,58,55,50,45,49,43,42,64,66,68,67,65,64,63,61,59,58,58,58,58,58,58,57,53,50,44,45,43,43,63,65,68,67,65,65,63,61,60,61,62,61,59,58,58,58,54,51,44,42,41,41,63,65,69,67,65,65,63,61,60,61,63,61,59,58,58,57,55,49,44,42,42,41],
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
