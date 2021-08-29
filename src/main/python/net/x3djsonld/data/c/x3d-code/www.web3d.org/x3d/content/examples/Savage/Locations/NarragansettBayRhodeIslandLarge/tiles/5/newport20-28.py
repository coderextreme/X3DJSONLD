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
        texture=ImageTexture(url=['../../images/5/newport20-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,34,34,34,34,34,34,34,35,36,40,42,44,45,43,42,41,36,31,29,28,28,34,34,34,34,34,34,34,34,34,34,38,42,43,44,42,38,36,32,29,28,28,28,34,35,34,35,34,34,34,34,34,34,36,40,42,42,40,38,34,30,29,29,28,28,34,39,38,38,36,35,35,34,33,34,34,37,40,41,38,37,35,33,31,29,29,29,38,39,45,41,38,36,36,34,34,34,34,37,40,40,39,39,36,32,31,30,30,30,49,52,49,45,37,37,36,34,34,34,34,38,42,42,40,38,37,34,32,31,31,32,44,50,46,41,41,40,36,34,34,34,35,39,42,44,41,40,37,35,32,32,33,33,44,43,45,42,41,40,39,34,34,34,36,40,43,43,42,40,38,35,33,33,35,36,46,46,45,43,42,38,36,34,34,34,37,43,45,43,41,41,40,38,35,34,39,39,45,48,48,45,42,38,37,35,34,35,41,46,47,44,42,40,38,36,35,37,42,43,48,46,44,43,39,37,37,36,34,36,44,50,49,44,40,38,38,36,38,44,46,47,43,47,44,39,37,37,37,36,35,38,47,52,50,47,43,41,39,39,43,46,48,48,42,43,43,40,37,37,37,36,36,39,47,54,54,49,47,44,43,41,45,48,50,50,45,44,41,38,37,37,37,36,37,41,49,56,55,51,48,47,46,45,47,51,55,55,51,48,42,37,37,36,37,37,37,42,55,59,55,52,50,49,47,49,52,55,59,59,46,41,44,43,40,38,38,37,37,45,56,63,60,51,48,49,49,51,54,58,60,61,48,45,40,40,40,37,37,37,38,46,59,65,61,51,50,51,51,53,55,60,63,63,53,48,45,40,37,37,38,37,39,47,60,67,61,52,51,52,53,55,58,62,65,65,56,55,49,45,39,40,39,38,40,48,60,67,62,54,51,52,55,57,60,63,65,66,55,56,52,47,42,42,39,38,40,51,62,66,60,55,52,53,56,58,61,63,67,68,52,48,47,46,46,44,40,40,42,51,60,65,61,56,53,54,57,57,60,62,67,68,54,50,46,43,43,43,41,43,46,52,59,63,63,56,54,54,56,57,59,62,68,69,58,55,50,44,43,42,42,43,47,52,59,62,62,57,55,55,56,58,60,62,68,69,58,55,50,45,43,43,42,43,47,52,58,62,62,57,56,55,56,58,60,62,68,69],
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
