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
        texture=ImageTexture(url=['../../images/5/newport26-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[52,52,53,55,57,56,53,49,48,48,49,50,50,49,46,45,44,45,46,48,54,60,63,52,53,53,54,56,56,53,50,50,51,51,51,51,50,46,45,46,46,46,50,56,64,66,52,53,53,53,53,52,51,51,52,53,53,53,51,50,47,46,47,47,47,50,57,63,65,53,53,52,52,51,51,51,52,53,54,54,54,52,51,48,47,47,48,49,50,55,60,61,56,55,54,54,53,52,52,53,54,54,54,54,53,53,51,49,49,49,50,50,52,56,58,58,58,57,56,55,55,54,53,54,54,54,54,54,53,52,51,50,51,51,51,52,54,55,59,59,58,57,57,56,54,53,54,54,54,53,52,52,51,51,50,49,50,50,51,53,54,58,57,56,57,56,55,55,54,54,53,53,52,52,52,51,51,50,49,49,49,50,51,52,57,56,56,57,58,58,56,55,54,53,53,52,52,52,52,51,51,51,50,49,49,49,49,59,58,57,57,58,58,56,55,54,54,53,53,53,53,52,52,53,53,52,51,51,52,52,61,61,59,58,57,57,56,55,55,54,53,53,54,54,53,54,54,54,54,53,54,54,54,62,62,60,58,58,57,57,57,56,55,54,54,54,55,55,56,56,56,56,56,56,55,55,61,61,61,60,59,59,59,58,57,56,55,55,55,56,56,57,59,59,58,59,58,57,56,61,61,62,62,61,61,61,60,59,58,57,56,57,58,59,60,61,61,60,60,60,59,58,62,63,64,64,64,64,64,62,61,60,60,60,61,61,62,62,63,63,63,62,61,60,60,63,64,66,66,67,67,67,65,63,62,63,63,64,65,65,65,64,65,65,63,62,62,61,64,64,64,64,65,66,67,67,66,65,65,64,64,64,64,64,65,66,66,65,64,63,62,66,65,63,63,63,64,65,68,68,67,66,64,64,64,64,64,65,67,68,67,65,64,63,68,68,64,63,63,63,65,70,70,68,67,64,64,64,64,64,65,67,70,69,68,65,64,69,68,63,63,63,63,64,68,70,69,67,65,64,64,65,66,69,71,72,71,70,66,65,69,69,65,63,63,63,64,66,70,70,69,67,68,69,68,71,75,75,74,73,71,67,65,69,71,71,68,65,65,68,70,72,71,70,70,71,73,75,76,77,77,76,75,72,68,66,69,71,72,71,68,68,71,72,72,71,70,70,71,73,75,78,78,78,77,75,72,68,66],
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
