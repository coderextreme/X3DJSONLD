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
        texture=ImageTexture(url=['../../images/5/newport14-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[47,49,52,51,51,52,55,58,58,55,53,54,55,56,56,55,54,51,50,50,51,51,51,46,49,52,51,51,51,53,56,55,54,53,53,53,55,56,57,53,51,52,52,52,51,51,44,48,52,49,47,47,48,51,54,57,58,56,54,55,56,57,54,53,53,54,54,53,53,47,49,50,48,48,51,53,53,55,57,59,57,55,54,53,52,53,53,53,53,54,53,53,49,49,47,48,50,52,53,53,56,59,59,58,56,54,50,50,53,54,52,52,53,53,53,49,48,46,50,51,52,52,54,59,63,63,61,58,54,50,50,52,52,51,51,52,53,53,48,49,47,50,51,49,49,50,54,59,62,61,58,54,51,51,53,51,51,52,53,53,52,45,47,48,51,53,52,49,49,51,54,57,56,55,54,54,54,55,52,52,52,52,53,51,45,46,47,50,53,54,52,52,52,52,52,53,53,54,55,55,53,52,52,51,51,52,52,46,44,45,46,49,51,52,53,54,53,51,52,51,50,50,50,52,52,51,50,51,52,52,43,41,42,43,47,49,50,52,51,49,50,53,55,51,50,50,51,50,52,52,51,52,52,41,40,41,43,46,48,48,49,48,46,49,52,53,50,49,49,49,50,50,52,53,53,54,41,42,42,41,44,47,48,46,46,47,48,47,47,47,47,48,49,51,50,50,52,53,54,41,42,41,40,41,44,46,44,44,46,47,46,45,47,47,48,50,52,51,51,52,55,55,38,39,40,40,40,42,43,43,41,42,43,43,44,47,48,48,48,51,52,52,52,53,55,38,38,39,40,38,38,38,36,36,38,40,42,43,45,46,46,47,50,51,51,50,51,55,39,38,37,37,36,36,36,36,37,39,40,42,43,45,47,46,46,46,47,49,49,50,54,36,35,35,34,35,36,38,39,39,39,40,42,42,43,45,46,44,45,49,50,50,52,55,34,32,32,34,34,35,37,37,38,39,39,40,41,42,44,46,46,49,51,52,54,56,58,31,31,31,32,32,33,34,35,39,41,40,40,43,44,45,46,50,52,53,54,55,54,56,28,29,30,31,31,32,33,35,39,41,42,42,44,47,48,49,51,53,53,55,54,54,55,27,28,28,30,31,33,35,37,40,41,41,42,46,49,49,47,49,53,54,55,55,55,55,27,28,29,31,33,35,36,38,40,40,41,42,45,47,46,46,49,53,56,56,56,58,58],
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
