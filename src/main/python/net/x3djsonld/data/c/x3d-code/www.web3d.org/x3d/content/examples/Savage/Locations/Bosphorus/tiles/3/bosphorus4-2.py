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
    GeoViewpoint(description='GeoViewpoint_3_42',geoSystem=['GDC'],position=(41.11691829101653,28.80840795623044,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,28.80840795623044,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-4.x3d'],child2Url=['../../tiles/4/bosphorus8-5.x3d'],child3Url=['../../tiles/4/bosphorus9-4.x3d'],child4Url=['../../tiles/4/bosphorus9-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.73422636498435,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[-1,-7,18,68,61,55,46,51,90,61,31,43,61,102,86,78,51,72,66,79,83,74,4,0,1,51,64,36,42,68,73,60,57,49,75,108,106,89,57,88,60,84,106,106,23,1,4,48,83,50,37,80,73,50,72,42,70,112,119,75,73,101,86,110,112,115,56,14,20,74,80,66,81,87,76,69,74,43,79,86,104,102,92,109,114,101,134,124,124,24,62,72,87,91,57,88,85,89,87,47,87,97,127,109,78,132,123,101,133,138,34,2,93,91,85,87,51,105,90,103,96,56,85,84,111,137,105,117,135,114,139,140,4,8,86,85,79,93,34,103,97,117,105,74,80,68,106,127,93,140,141,115,133,135,1,19,94,111,84,95,75,113,124,114,84,97,124,77,98,121,100,131,145,130,97,94,57,48,83,109,104,129,105,130,139,124,117,117,135,112,81,127,119,135,142,131,97,92,33,89,105,98,76,120,126,99,141,135,131,133,150,125,104,124,133,120,150,129,109,110,80,91,103,109,99,109,109,106,151,133,115,142,138,149,101,107,150,131,155,130,148,153,101,99,108,120,103,116,107,121,159,134,116,164,163,157,129,130,157,149,155,144,167,165,53,118,139,135,110,120,103,138,158,143,129,174,179,155,154,151,171,164,165,151,136,122,38,128,149,131,95,121,87,111,149,160,152,179,193,139,162,158,183,162,136,111,87,102,24,82,144,124,103,136,134,150,141,146,171,192,175,171,176,178,176,147,125,53,56,49,21,77,146,141,139,137,167,147,127,171,198,193,196,199,174,187,155,96,60,62,96,106,24,127,136,147,160,142,158,146,158,188,192,213,190,209,201,187,174,152,110,136,78,82,66,38,71,106,162,176,171,170,193,203,222,203,195,208,207,157,157,154,100,61,144,124,98,101,51,96,145,151,196,194,216,226,187,163,194,177,197,156,120,145,125,43,42,61,115,32,124,48,93,181,185,212,229,217,191,120,172,125,146,178,184,179,118,78,52,32,96,28,105,58,64,99,141,207,205,170,155,113,156,163,111,157,115,138,58,45,130,111,92,32,110,60,74,90,135,207,207,173,149,104,162,159,115,147,109,122,55,62,128,106],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
