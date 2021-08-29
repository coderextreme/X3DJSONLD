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
        texture=ImageTexture(url=['../../images/5/newport24-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[54,55,57,59,60,59,59,59,59,58,58,58,58,57,56,54,53,53,53,52,51,50,49,55,56,58,59,60,60,59,58,58,58,58,59,59,58,57,55,54,51,50,49,48,47,46,56,57,58,59,60,60,59,58,58,58,59,59,58,55,54,54,54,52,50,49,47,44,44,56,58,58,59,59,59,59,59,59,58,58,57,55,53,51,51,53,50,50,50,46,44,44,54,56,58,60,60,60,59,58,57,57,55,54,53,52,52,52,51,50,50,49,47,46,45,51,55,59,61,62,61,60,58,56,55,53,52,51,52,52,52,51,49,49,48,48,46,45,49,55,59,61,62,62,61,59,56,53,52,51,51,50,50,50,50,48,47,47,47,46,46,50,55,59,61,62,61,60,59,56,53,51,51,51,50,49,48,47,46,46,46,47,47,46,53,57,60,61,61,61,60,58,55,53,50,50,50,49,48,47,47,45,44,44,45,45,45,54,58,60,61,61,61,59,58,55,53,50,49,49,49,47,46,45,43,42,41,41,41,41,55,59,61,62,62,61,59,57,55,53,51,49,48,47,45,43,41,40,40,40,40,40,40,57,61,63,63,61,60,58,56,54,52,50,48,46,43,42,40,39,39,39,40,40,40,40,60,62,62,61,60,59,56,53,49,46,44,43,42,41,40,40,40,40,40,40,40,40,40,58,58,58,56,55,52,49,45,42,41,41,42,41,40,40,40,40,40,40,40,40,40,40,53,53,52,50,48,46,44,42,41,41,42,41,41,40,40,40,40,40,40,40,40,40,40,47,48,46,46,44,43,42,41,41,41,41,41,41,40,40,40,40,40,40,40,40,40,40,42,43,42,42,41,41,41,42,42,42,41,41,40,40,40,40,40,40,40,40,40,40,40,40,40,41,41,41,42,42,43,42,42,40,40,40,40,40,40,40,40,40,40,40,40,40,43,42,42,42,42,43,43,42,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,47,45,44,43,43,43,42,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,49,48,45,44,43,42,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,50,49,47,44,43,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,51,49,47,45,43,41,40,40,40,40,40,40,40,40,40,40,40,40,40,42,42,42,41],
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
