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
        texture=ImageTexture(url=['../../images/5/newport14-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[36,39,41,44,46,47,48,49,48,48,48,48,48,49,48,48,46,46,47,48,47,47,47,33,36,39,42,45,46,47,48,47,47,47,46,48,52,52,53,50,47,46,46,47,46,46,34,35,38,41,44,46,47,48,48,46,46,47,49,52,55,56,54,50,46,45,44,44,44,36,38,39,40,42,47,51,50,50,50,50,47,46,48,46,44,44,47,46,46,46,46,47,36,38,39,40,42,46,49,49,48,49,49,47,45,43,41,39,39,43,45,47,47,49,49,34,35,37,40,43,47,46,45,45,45,46,46,45,44,42,42,42,43,47,47,46,48,49,33,32,34,37,42,46,46,45,45,46,46,46,46,47,46,45,46,46,48,47,47,48,48,31,32,34,36,41,42,43,44,44,47,48,47,48,48,47,47,48,47,46,45,45,46,45,30,32,34,36,38,40,42,44,44,46,49,48,47,48,48,48,48,47,45,44,43,44,45,30,32,34,36,38,41,42,44,45,45,46,47,47,47,46,45,45,45,45,44,44,46,46,27,30,34,36,38,41,42,42,43,45,46,48,47,47,46,46,45,44,44,44,44,45,43,26,29,32,34,37,38,40,42,45,46,47,47,46,46,46,46,44,42,42,42,43,42,41,28,31,32,33,35,37,41,45,48,47,47,44,42,41,41,42,41,41,41,42,41,41,41,27,30,31,33,35,40,42,43,45,44,43,42,40,39,40,42,41,40,39,40,39,39,41,28,30,32,34,37,42,43,42,43,40,40,41,39,40,42,42,40,39,38,39,39,38,38,28,31,35,35,35,37,41,42,39,36,36,37,39,41,42,40,39,38,38,41,42,39,38,27,28,31,32,33,36,39,42,42,38,35,35,39,42,42,41,39,37,35,37,39,38,39,27,28,29,32,33,35,38,41,44,40,37,36,39,43,42,40,38,38,36,35,36,36,36,29,30,32,35,34,32,35,39,42,42,41,41,41,42,41,38,35,36,35,33,32,33,34,27,30,32,36,36,35,37,39,40,42,45,46,45,43,41,39,34,33,32,30,30,30,31,28,32,33,35,37,37,37,39,41,44,46,47,44,39,38,36,36,35,34,31,28,27,28,31,34,36,36,36,37,38,40,43,46,46,44,41,34,33,32,34,34,34,31,27,26,27,31,34,36,35,36,38,40,42,44,46,48,45,41,35,32,31,31,31,31,28,27,27,27],
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
