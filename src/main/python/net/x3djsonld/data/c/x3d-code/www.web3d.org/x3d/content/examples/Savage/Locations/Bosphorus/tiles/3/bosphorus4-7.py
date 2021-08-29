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
    GeoViewpoint(description='GeoViewpoint_3_47',geoSystem=['GDC'],position=(41.11691829101653,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-14.x3d'],child2Url=['../../tiles/4/bosphorus8-15.x3d'],child3Url=['../../tiles/4/bosphorus9-14.x3d'],child4Url=['../../tiles/4/bosphorus9-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[120,167,148,166,197,224,173,206,168,183,220,280,243,233,225,221,154,210,216,106,56,59,114,156,178,169,225,198,183,174,207,182,224,269,214,221,217,196,97,168,65,78,70,110,155,148,131,157,195,188,221,215,215,227,251,255,184,196,197,182,112,66,182,90,190,195,137,137,168,143,163,156,165,178,190,206,249,204,175,120,95,67,60,139,189,204,174,153,139,125,179,164,185,209,194,183,221,241,243,240,225,194,185,91,67,113,144,172,101,73,157,151,194,167,190,214,193,174,198,221,182,166,182,174,119,117,126,65,95,69,137,168,145,181,207,195,162,167,188,140,167,220,225,160,157,113,155,60,101,64,63,110,159,140,171,184,205,201,200,198,192,146,205,195,231,180,155,65,90,177,51,68,96,63,112,132,184,182,239,164,155,159,177,158,135,129,162,146,71,122,62,109,58,91,126,170,191,189,174,179,198,170,142,164,165,205,171,169,97,124,62,154,63,65,122,65,84,106,152,122,185,205,218,190,177,135,133,154,158,142,67,60,144,56,53,124,153,114,133,170,123,165,153,137,191,200,134,171,104,112,154,109,155,160,76,119,57,150,122,133,126,142,108,127,140,131,153,159,117,160,117,113,162,73,127,118,62,78,60,135,58,61,142,172,90,71,142,110,150,160,93,130,58,95,81,86,35,55,19,22,81,110,108,121,112,140,68,86,59,86,111,116,61,40,75,36,29,42,116,96,42,15,136,146,113,71,133,86,58,64,68,104,64,55,108,77,76,117,88,114,114,61,38,12,95,117,47,120,30,81,110,144,82,126,126,118,118,94,118,153,115,74,89,82,18,77,42,91,32,80,108,161,165,156,119,107,123,136,119,149,130,163,160,141,51,43,82,97,27,48,19,62,128,128,121,103,146,152,158,136,154,142,158,112,151,121,117,108,76,123,13,30,17,46,38,104,105,89,140,151,130,101,150,119,139,135,142,72,76,77,35,63,44,33,6,4,69,71,76,38,119,122,118,135,79,101,120,118,81,58,47,62,42,78,56,40,5,7,36,13,10,10,117,127,122,133,75,99,118,111,85,62,48,62,43,74,62,33,3,5,31,14,8,9],
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
