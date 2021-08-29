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
        texture=ImageTexture(url=['../../images/5/newport19-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,47,39,36,30,32,33,34,35,35,36,36,34,37,35,29,29,26,23,20,21,20,56,46,39,33,33,34,32,32,32,34,41,36,33,35,33,28,25,20,20,23,17,16,55,47,41,35,33,32,33,32,35,34,31,31,34,30,27,28,27,20,19,19,17,17,49,47,43,37,36,33,32,31,33,37,34,32,31,30,28,24,22,25,22,20,18,18,48,45,43,36,31,33,31,33,32,36,34,33,31,28,29,29,29,29,24,22,23,24,49,46,42,39,36,31,31,32,33,36,37,38,33,25,24,33,31,26,26,26,25,25,51,51,46,43,40,34,32,33,34,33,38,34,35,35,32,30,30,29,34,31,30,28,54,53,48,43,43,39,36,34,36,35,36,36,36,39,38,32,30,31,32,32,34,34,56,51,49,46,43,41,37,35,34,37,38,35,40,39,40,35,32,35,30,29,25,25,56,54,50,44,42,39,37,36,35,34,36,34,37,41,38,31,34,38,31,27,23,22,54,49,47,44,39,37,36,34,33,37,34,39,39,38,33,31,36,31,33,32,24,23,52,46,40,41,36,38,38,33,33,35,37,41,37,34,31,35,30,29,28,24,24,23,51,49,46,40,40,39,36,37,35,31,33,35,32,29,32,33,29,29,28,29,28,27,56,54,50,44,41,37,39,41,39,31,31,28,28,24,25,29,31,29,30,30,32,31,66,60,55,51,44,43,40,39,39,35,30,28,27,26,24,26,28,33,33,31,30,32,72,65,63,55,47,45,40,39,35,40,36,31,25,25,23,28,27,31,33,31,33,32,73,67,61,54,49,42,41,40,38,39,36,32,27,24,26,25,27,32,29,29,31,30,71,69,59,51,48,43,42,37,36,36,37,33,31,26,30,23,25,24,25,28,26,25,70,62,53,50,43,39,39,33,32,36,35,33,32,28,25,27,28,28,25,22,21,22,66,59,54,44,41,40,35,29,31,34,33,33,32,32,26,26,26,21,24,24,22,21,63,59,51,47,40,39,31,27,28,29,33,34,33,28,28,27,23,26,24,22,20,20,63,56,49,46,42,39,31,28,31,24,29,32,28,30,30,27,28,27,23,22,23,24,62,56,56,49,43,37,34,32,26,26,25,26,28,30,28,26,28,27,26,26,23,22,61,57,56,49,43,37,35,32,26,25,25,25,27,30,27,26,28,28,26,26,24,23],
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
