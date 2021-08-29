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
        texture=ImageTexture(url=['../../images/5/newport16-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,47,49,48,43,40,43,42,38,35,34,33,31,29,27,24,23,21,23,24,25,25,55,51,48,46,45,44,48,45,42,38,35,32,29,30,29,25,24,22,23,24,27,27,56,54,47,48,52,51,50,47,44,41,38,35,31,31,30,27,26,24,24,27,30,30,57,55,51,52,54,53,52,50,47,45,39,36,34,31,31,29,28,27,28,30,32,32,59,54,51,54,54,54,51,48,48,48,47,41,38,35,32,32,28,30,33,35,36,37,61,54,54,55,54,52,51,51,51,50,49,47,47,44,38,36,31,29,32,38,37,36,62,60,57,55,52,53,53,55,54,50,50,49,48,46,42,42,37,36,36,37,38,38,64,62,61,58,55,54,54,55,51,49,49,49,48,48,46,45,41,36,39,40,39,37,66,66,62,62,59,58,55,49,51,47,46,51,46,47,46,47,44,41,39,38,38,38,66,62,63,60,61,58,52,50,48,52,49,44,44,44,40,37,40,42,38,37,38,39,64,63,62,62,60,57,53,50,48,47,45,48,42,42,39,41,44,37,42,39,40,40,61,59,59,58,58,58,57,55,52,54,48,45,46,42,39,43,40,44,42,42,38,38,58,56,58,58,57,60,59,57,57,56,57,46,49,44,50,44,41,41,42,43,45,47,56,58,57,59,58,61,62,61,61,62,63,58,52,50,48,47,43,45,41,41,41,42,58,57,57,57,61,62,63,61,62,62,60,65,62,53,52,47,46,46,44,43,43,41,57,57,57,58,60,61,65,63,62,59,56,63,61,61,54,53,47,48,49,44,45,45,56,59,60,59,59,62,64,61,59,58,58,63,62,62,61,60,55,48,47,44,45,45,55,56,56,59,62,64,65,66,65,63,62,61,60,61,57,59,61,58,52,49,51,50,58,59,61,66,66,64,65,63,64,67,66,63,61,60,67,60,57,58,60,57,52,52,59,62,63,65,67,66,66,72,67,66,63,64,64,64,60,62,64,68,67,62,60,60,65,66,68,64,62,64,66,67,68,64,64,65,65,64,64,67,74,72,71,70,65,65,63,63,64,63,64,66,66,67,66,64,67,65,67,66,72,73,75,75,73,78,74,73,62,60,60,61,64,62,64,64,67,68,66,68,70,69,69,69,72,78,75,76,76,75,61,60,59,60,63,62,64,64,68,68,67,67,69,68,69,70,71,76,73,76,77,75],
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
