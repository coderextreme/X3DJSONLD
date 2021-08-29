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
        texture=ImageTexture(url=['../../images/5/newport31-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[28,30,31,33,35,36,36,38,40,42,41,42,42,42,43,44,44,43,44,45,45,46,47,27,31,33,36,37,37,38,42,43,43,43,43,43,43,44,44,46,48,48,47,46,48,49,32,33,32,35,37,39,39,42,43,43,45,47,46,48,47,46,48,49,51,52,51,51,51,33,32,34,37,37,39,40,41,42,43,44,47,48,49,50,51,52,52,52,54,53,53,53,32,34,38,38,38,40,40,39,43,44,44,46,47,49,53,54,55,54,55,54,53,54,53,34,35,37,38,39,41,41,40,44,45,44,47,48,51,54,54,53,54,55,54,54,54,54,32,35,37,38,40,41,43,43,48,49,48,48,48,51,54,54,53,54,54,55,56,55,54,31,34,37,38,39,40,43,44,46,48,47,48,50,51,52,53,53,54,54,56,56,55,55,31,33,36,37,38,40,43,46,47,45,46,48,51,52,50,50,51,53,52,53,54,54,55,30,32,35,37,37,39,42,45,46,47,48,49,50,51,50,48,48,49,50,52,52,54,55,29,32,35,37,37,38,40,43,46,47,48,49,48,48,48,47,46,48,50,51,51,53,52,29,32,35,37,38,38,41,43,43,44,45,45,44,44,44,44,45,47,50,51,53,53,52,28,31,34,37,40,42,42,43,42,41,41,43,42,41,41,41,43,43,46,49,51,50,50,27,31,34,36,38,39,39,39,39,38,39,40,40,39,40,41,42,43,47,49,49,48,48,27,31,33,34,35,35,35,36,36,35,36,36,36,37,39,42,43,44,46,48,49,48,49,27,29,30,32,34,33,32,32,34,35,35,35,36,37,39,43,44,43,43,45,45,46,46,26,29,30,32,34,33,33,32,31,33,34,34,36,37,37,38,41,41,42,44,44,45,47,26,28,28,30,33,34,34,33,32,32,34,35,37,37,36,37,39,39,40,43,43,45,47,26,28,28,30,33,34,33,31,31,32,35,36,37,36,35,35,38,38,39,42,41,42,43,25,26,28,30,31,32,30,30,31,32,33,34,36,36,36,36,37,38,40,41,40,41,42,26,25,26,28,29,30,29,29,30,30,30,31,33,34,36,37,38,39,39,41,41,41,42,26,24,23,25,28,29,29,29,29,28,28,30,32,34,36,38,37,38,38,39,39,40,42,25,24,23,25,27,28,29,29,29,28,28,30,32,34,36,37,37,38,38,38,39,40,41],
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
