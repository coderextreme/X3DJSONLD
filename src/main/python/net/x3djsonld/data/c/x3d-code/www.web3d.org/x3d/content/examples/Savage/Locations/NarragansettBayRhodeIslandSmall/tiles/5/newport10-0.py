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
        texture=ImageTexture(url=['../../images/5/newport10-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[41,38,36,37,40,43,44,43,45,43,43,43,43,44,44,46,47,47,47,49,47,48,49,39,38,37,36,37,41,43,42,42,42,43,43,42,44,46,47,48,49,49,48,49,49,49,36,37,37,38,40,40,42,44,45,43,43,44,44,44,45,45,46,48,49,48,49,49,50,36,38,37,37,39,41,43,44,45,45,44,44,44,44,46,45,47,50,50,50,51,51,51,38,39,38,37,37,42,45,44,43,42,42,43,47,47,48,48,49,50,50,51,50,51,51,38,38,38,37,38,40,43,45,43,42,44,47,51,51,49,50,51,50,50,50,50,52,52,40,41,41,40,40,40,41,44,44,44,46,49,51,50,48,49,50,50,52,52,52,53,53,40,42,42,42,40,40,40,44,45,46,47,49,51,49,49,49,49,50,52,54,55,55,55,36,39,41,43,42,41,43,45,48,49,49,49,49,49,52,53,52,51,51,53,54,56,56,37,40,42,43,44,45,45,45,47,49,50,48,48,49,51,53,53,52,52,53,54,55,56,40,43,44,45,45,46,46,46,46,49,50,48,48,49,50,52,52,52,54,55,56,57,58,41,44,47,47,47,47,48,47,47,48,49,50,51,52,53,54,54,53,55,54,56,57,58,43,44,47,48,48,49,51,50,50,50,51,51,52,53,54,52,52,52,54,56,58,58,61,45,47,49,50,49,50,51,50,52,52,51,51,53,53,53,52,52,53,56,58,59,60,61,46,48,49,50,50,50,50,50,52,52,51,51,53,54,53,52,54,56,58,59,58,60,60,45,46,48,49,50,51,52,51,52,51,50,50,52,54,54,52,53,55,58,59,58,59,60,48,47,47,47,49,49,49,49,50,50,50,49,50,52,52,52,54,55,56,57,59,61,62,48,45,45,45,48,49,48,48,50,52,52,50,51,53,52,53,55,56,57,58,59,61,63,46,45,45,46,49,50,49,48,47,49,51,54,56,57,57,56,57,58,58,59,60,61,62,46,45,46,48,50,51,50,49,48,48,49,50,53,55,57,60,60,60,58,59,61,61,62,45,45,47,49,50,51,50,49,50,50,50,50,50,52,56,60,61,58,57,58,60,62,63,47,48,48,49,49,47,47,49,53,52,51,52,52,54,55,57,58,58,57,57,59,61,63,47,49,48,48,49,47,47,50,53,52,52,53,53,54,54,55,56,57,56,57,60,62,63],
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
