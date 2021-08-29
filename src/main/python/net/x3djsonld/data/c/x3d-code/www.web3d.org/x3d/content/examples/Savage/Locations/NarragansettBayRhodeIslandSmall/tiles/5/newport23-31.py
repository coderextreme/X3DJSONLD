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
        texture=ImageTexture(url=['../../images/5/newport23-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[36,36,36,35,34,33,34,39,43,47,51,54,56,58,58,58,59,61,62,63,65,64,63,38,38,39,39,38,36,35,37,40,43,47,51,54,56,56,56,57,60,61,62,62,62,62,39,40,41,42,41,39,38,37,38,40,42,47,51,53,54,54,56,59,61,61,61,62,62,39,42,43,43,42,41,41,41,41,41,41,44,47,49,51,52,54,57,59,60,62,62,62,42,44,45,44,43,43,44,44,44,44,44,44,45,46,47,50,52,55,57,58,60,64,64,46,46,46,45,45,45,46,46,47,48,48,48,48,48,48,49,50,52,54,56,58,61,63,48,47,46,46,47,48,48,49,50,51,52,52,52,51,50,50,50,51,52,54,56,59,60,49,49,48,49,50,50,51,51,52,54,55,55,55,53,52,52,51,51,52,53,55,56,57,50,50,50,51,52,52,53,53,54,56,57,57,56,55,55,54,53,51,52,53,53,54,55,52,51,52,53,53,54,54,55,56,57,59,58,57,57,57,56,55,54,52,52,52,53,54,53,53,53,53,54,55,56,56,57,59,59,59,58,58,58,58,58,57,54,52,50,50,51,54,54,54,55,55,56,57,58,59,60,60,59,59,59,58,58,58,58,56,54,51,50,50,54,55,56,56,57,57,58,60,61,62,61,60,59,59,58,57,56,56,56,55,54,52,51,53,56,57,57,58,58,59,60,61,61,62,61,60,60,59,58,55,54,54,54,54,53,52,52,54,56,57,58,59,59,60,60,61,61,61,61,61,60,59,57,55,53,53,52,51,51,51,53,55,56,58,59,59,60,60,60,60,60,61,61,60,59,57,56,55,54,52,51,50,50,52,54,56,57,58,60,60,60,59,59,59,60,61,60,59,58,58,57,56,54,52,52,50,52,54,56,57,58,59,60,59,58,58,58,59,60,60,60,59,59,58,56,54,53,52,50,52,54,56,57,58,59,59,58,57,57,57,58,59,59,60,60,59,58,56,54,53,52,51,53,55,57,57,58,58,58,57,57,57,57,57,57,58,59,59,58,57,56,54,52,51,52,54,56,58,59,59,59,58,58,57,57,57,57,57,57,57,57,57,56,55,54,52,51,53,55,57,59,59,59,59,59,58,58,58,57,57,57,56,55,55,55,54,53,52,50,50,54,55,57,59,60,59,59,59,59,58,58,58,58,57,56,54,53,53,53,52,51,50,49],
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
