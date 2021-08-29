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
    GeoViewpoint(description='GeoViewpoint_3_27',geoSystem=['GDC'],position=(40.898245841898074,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.898245841898074,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus4-14.x3d'],child2Url=['../../tiles/4/bosphorus4-15.x3d'],child3Url=['../../tiles/4/bosphorus5-14.x3d'],child4Url=['../../tiles/4/bosphorus5-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus2-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[102,78,92,146,44,76,84,179,200,217,282,335,351,330,314,341,311,256,280,269,281,287,156,172,109,139,64,107,91,159,180,222,224,268,352,373,360,323,301,278,265,289,277,279,166,172,176,155,116,157,130,154,184,209,225,241,280,371,386,319,279,262,270,315,294,290,175,184,195,186,156,166,143,137,188,233,230,237,242,284,314,277,273,265,271,291,327,320,182,179,167,171,177,180,151,148,212,242,240,241,242,259,258,282,268,273,277,288,310,327,194,188,180,183,154,157,145,163,183,239,253,250,256,258,262,273,289,294,286,283,291,294,220,210,212,196,200,189,134,153,172,196,264,254,257,286,319,358,322,356,360,329,318,332,263,244,235,201,177,166,159,157,148,199,202,236,262,261,268,292,311,305,311,310,312,316,258,262,249,214,219,185,160,164,180,181,226,252,250,260,267,275,287,292,317,306,313,317,267,288,256,210,195,185,156,200,183,200,221,222,255,269,268,275,281,297,299,312,316,317,265,290,245,223,209,176,171,200,242,217,235,271,247,277,290,267,289,295,307,304,312,308,247,297,258,196,214,204,204,195,245,263,253,236,236,257,239,302,323,348,328,311,303,311,239,296,259,201,182,215,187,187,221,195,258,216,214,217,283,303,337,318,339,341,311,291,248,288,243,221,176,186,199,175,207,209,231,264,242,233,269,323,338,322,330,342,299,294,240,284,212,213,181,168,165,182,227,272,276,302,263,268,263,319,347,340,293,329,331,308,202,234,223,197,190,185,162,182,220,258,301,322,335,295,256,317,338,312,304,291,334,335,206,217,216,217,185,190,157,167,191,254,276,323,358,329,314,299,295,343,348,301,292,314,229,203,177,220,194,167,163,174,188,214,270,299,393,347,317,285,271,329,356,337,287,278,192,176,160,195,197,165,191,184,231,201,219,269,316,336,355,276,234,305,308,334,300,294,167,171,150,180,191,152,172,177,206,241,233,307,268,323,371,312,246,248,259,330,333,312,151,151,176,135,147,184,174,200,220,201,223,245,297,313,334,349,240,225,263,291,359,340,148,148,174,135,149,186,173,204,226,204,231,244,289,319,334,343,241,228,250,295,355,339],
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
