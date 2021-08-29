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
    GeoViewpoint(description='GeoViewpoint_3_37',geoSystem=['GDC'],position=(41.0075820664573,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-14.x3d'],child2Url=['../../tiles/4/bosphorus6-15.x3d'],child3Url=['../../tiles/4/bosphorus7-14.x3d'],child4Url=['../../tiles/4/bosphorus7-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[148,148,174,135,149,186,173,204,226,204,231,244,289,319,334,343,241,228,250,295,355,339,142,142,133,141,153,194,194,226,266,254,296,246,251,318,312,348,273,206,198,216,300,289,144,180,180,141,176,172,204,247,280,296,252,270,247,272,348,351,304,241,194,247,276,249,233,285,204,166,160,167,175,224,271,308,289,294,307,317,330,363,327,327,244,175,235,261,200,236,214,213,201,229,242,257,232,300,279,278,306,285,325,343,377,357,275,285,193,184,175,212,239,207,196,220,263,226,231,254,280,294,283,279,336,336,372,339,314,361,325,282,172,184,206,269,254,283,271,291,235,258,260,237,252,294,272,295,306,289,342,284,242,235,209,256,237,242,287,305,335,334,269,278,254,268,271,291,239,289,281,356,358,343,268,288,158,231,233,275,288,320,360,359,350,273,226,218,254,289,225,290,315,335,382,343,322,334,202,168,201,242,293,315,321,361,311,247,225,191,229,247,218,279,259,313,374,350,288,327,190,238,209,227,317,284,253,275,303,250,201,208,201,261,211,226,273,305,361,318,271,325,178,204,210,245,266,244,260,261,305,257,225,181,195,234,248,271,292,341,319,295,239,212,191,221,183,229,307,238,211,285,269,230,221,167,179,221,235,254,273,329,280,298,231,186,199,183,187,207,223,192,204,221,238,217,154,164,181,207,206,223,276,305,296,214,211,180,154,180,213,210,169,194,238,249,224,228,154,211,218,240,256,232,260,302,315,284,216,172,154,204,206,174,178,184,186,237,209,228,153,226,249,265,256,272,267,275,322,241,248,227,198,208,187,166,170,182,171,241,192,221,151,171,258,239,239,252,277,273,274,271,217,179,195,186,195,140,96,150,175,180,136,163,215,217,238,199,218,224,234,270,226,189,139,161,157,211,115,130,156,117,185,125,199,161,160,168,202,228,222,266,269,263,247,257,142,113,171,118,112,156,167,137,150,179,221,223,231,237,225,233,244,240,229,200,190,171,211,171,123,153,146,160,194,224,179,204,164,185,223,281,243,239,229,226,151,208,220,104,68,72,120,167,148,166,197,224,173,206,168,183,220,280,243,233,225,221,154,210,216,106,56,59],
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
