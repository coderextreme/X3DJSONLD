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
        texture=ImageTexture(url=['../../images/5/newport11-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[49,51,54,53,53,55,56,54,55,54,55,57,60,62,64,64,66,66,66,67,65,65,67,53,55,55,51,49,50,52,54,55,56,57,60,62,62,64,65,67,66,65,66,65,65,67,55,57,55,50,46,46,48,52,55,57,59,63,64,62,62,64,66,67,68,69,68,67,70,55,54,53,53,49,47,49,50,53,55,57,63,64,62,63,64,67,70,73,72,69,68,70,55,52,51,53,51,51,52,53,54,57,60,60,62,63,64,65,67,69,72,72,70,68,67,53,52,50,51,53,53,52,54,56,59,61,60,61,64,63,64,66,65,69,72,74,70,67,50,52,51,52,52,52,55,54,56,59,61,61,62,62,61,64,65,64,66,70,74,72,70,53,53,52,52,51,51,54,55,57,59,57,57,60,60,60,61,63,64,65,67,71,72,74,56,53,52,52,48,47,49,51,54,56,53,54,57,57,59,63,66,67,67,68,72,75,77,53,52,51,51,51,51,49,50,54,55,54,51,52,56,62,67,68,67,67,70,75,77,78,51,51,52,53,53,51,49,50,52,53,54,50,50,54,61,65,65,64,66,70,75,78,78,50,51,52,52,53,52,51,52,51,51,53,50,47,50,55,60,61,62,67,71,77,79,78,51,53,52,52,52,53,52,53,53,53,53,48,45,48,54,59,62,65,70,73,76,76,75,50,53,53,52,52,52,52,53,55,55,54,50,50,53,59,64,67,69,71,70,71,69,68,49,51,53,54,54,53,52,53,55,55,55,54,57,59,64,68,70,70,68,66,66,64,64,51,51,52,53,52,52,53,54,53,53,57,61,63,63,64,64,64,64,64,66,67,65,66,52,53,55,56,55,52,51,52,53,54,57,62,66,65,62,58,58,59,63,66,67,68,71,52,53,55,55,55,55,53,52,52,53,56,63,68,69,65,60,60,61,63,65,66,68,71,54,53,54,55,55,56,57,55,53,54,56,62,68,69,67,64,64,64,64,64,64,68,70,55,55,55,56,57,59,59,57,56,55,58,64,68,67,65,64,64,65,66,64,64,66,67,58,57,56,56,58,58,58,58,58,58,61,64,65,63,63,63,63,64,64,65,64,63,63,58,58,56,57,59,59,60,61,61,60,61,61,60,61,63,65,64,62,63,64,63,62,62,59,59,58,58,60,61,61,62,60,60,61,61,60,61,63,64,63,62,61,62,62,63,64],
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
