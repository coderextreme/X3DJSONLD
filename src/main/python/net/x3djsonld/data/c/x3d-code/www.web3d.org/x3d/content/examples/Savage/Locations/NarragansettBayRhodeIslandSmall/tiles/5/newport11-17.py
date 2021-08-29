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
        texture=ImageTexture(url=['../../images/5/newport11-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[27,26,27,27,26,25,23,22,21,22,22,21,20,20,20,21,23,23,24,24,24,25,28,29,28,26,24,23,23,23,24,23,24,23,22,21,21,21,21,23,23,24,25,27,27,29,28,27,26,24,23,23,25,24,23,24,24,23,22,22,23,23,23,23,24,26,25,27,30,26,26,26,25,26,24,25,25,24,23,23,24,24,22,23,24,24,26,26,27,27,28,32,26,26,25,25,24,24,24,25,24,23,24,24,24,24,24,25,26,26,28,29,29,31,35,27,26,27,27,24,24,26,29,28,26,24,24,25,25,26,26,24,24,26,28,30,33,36,29,29,29,27,26,25,28,29,28,27,25,25,27,26,26,27,27,25,26,28,29,32,35,30,30,29,28,28,26,27,27,26,25,25,26,27,27,28,29,28,27,28,29,29,32,34,30,30,29,29,29,26,26,26,26,27,28,28,28,29,30,30,30,28,29,28,30,31,34,33,32,30,29,28,28,29,28,27,28,29,28,29,30,30,30,30,30,31,30,31,33,34,36,35,32,29,28,29,31,29,28,27,27,29,29,29,30,29,30,32,31,33,33,33,33,34,33,32,29,28,30,30,28,29,29,31,31,30,29,31,30,30,31,34,36,35,32,32,32,32,30,30,31,32,31,29,29,30,32,31,30,28,31,31,33,34,35,37,37,36,35,32,33,31,30,31,33,31,30,29,30,30,31,29,29,31,32,35,36,36,36,37,37,37,33,32,31,30,29,29,28,28,29,30,30,30,31,32,32,33,34,35,37,37,37,37,38,29,28,29,29,27,28,27,27,29,30,30,32,36,37,34,33,34,36,36,36,37,36,36,27,27,29,30,27,27,27,27,29,31,32,33,36,38,36,34,35,37,36,37,38,37,37,29,29,29,30,28,29,28,27,30,32,34,34,34,35,34,34,36,36,37,38,39,39,38,27,26,28,29,30,31,30,29,31,32,33,34,34,35,35,36,36,36,39,39,38,40,39,26,28,28,29,31,30,30,29,31,32,34,34,35,35,38,40,39,38,39,39,39,38,38,28,28,29,30,31,30,30,31,33,33,34,35,35,36,40,42,40,39,39,40,40,39,38,30,30,31,34,35,33,32,32,34,34,34,36,37,39,42,44,43,43,43,42,40,39,39,30,31,33,35,36,34,34,33,35,34,35,36,39,41,43,45,45,45,44,43,41,39,39],
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
