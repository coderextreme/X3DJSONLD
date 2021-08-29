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
        texture=ImageTexture(url=['../../images/5/newport31-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[47,48,49,49,48,47,46,48,49,49,50,49,48,47,45,44,45,45,43,44,42,41,41,49,50,50,51,52,49,47,49,53,51,49,48,48,48,46,45,45,44,43,41,39,38,40,51,50,50,53,54,49,47,50,52,50,48,49,50,48,48,49,46,44,44,43,40,37,37,53,51,51,53,53,52,50,51,52,51,50,50,49,48,47,48,47,46,46,44,40,38,37,53,52,52,54,56,55,53,52,52,51,50,50,49,47,47,48,47,46,45,44,41,39,38,54,53,54,56,57,57,54,53,52,51,49,49,50,48,48,47,47,46,44,42,40,38,37,54,53,52,53,54,55,55,53,53,52,52,52,51,49,47,46,47,46,44,42,40,38,36,55,54,53,52,52,54,54,52,52,52,53,52,50,49,48,47,47,46,44,43,39,39,38,55,55,55,54,54,55,54,51,51,51,52,51,49,49,50,49,49,47,44,42,39,39,38,55,55,55,54,54,55,54,52,50,51,51,50,49,49,49,48,48,46,44,42,40,39,38,52,53,54,55,55,55,54,52,51,51,50,49,48,48,48,48,47,45,43,43,42,40,38,52,52,54,54,54,54,53,53,51,50,50,48,47,48,48,46,45,44,43,42,42,39,38,50,52,53,52,51,51,51,52,51,50,51,49,46,47,48,46,45,45,43,42,40,40,38,48,51,52,51,51,51,51,51,50,50,50,49,47,48,47,46,45,45,44,43,41,41,39,49,51,50,49,49,49,49,49,48,49,49,48,48,48,48,46,45,46,44,43,42,40,39,46,47,47,47,48,48,49,49,47,47,49,48,48,49,49,49,48,46,44,43,41,39,39,47,48,47,47,47,47,47,47,47,48,48,48,48,48,49,49,47,45,43,42,40,40,40,47,47,47,47,46,46,46,45,46,46,47,48,48,48,49,47,46,46,44,43,42,42,40,43,44,45,45,45,47,48,48,46,45,46,47,48,49,47,45,45,45,44,44,43,42,40,42,42,43,44,44,46,47,46,45,45,45,46,47,48,47,46,46,45,44,44,44,42,40,42,42,44,45,44,44,45,45,45,46,45,46,47,46,46,47,47,46,44,44,43,42,39,42,43,44,45,44,44,44,44,45,45,45,46,48,47,47,48,48,46,43,43,43,41,39,41,42,44,44,43,43,43,44,45,44,45,46,49,48,48,48,48,46,44,44,43,41,40],
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
