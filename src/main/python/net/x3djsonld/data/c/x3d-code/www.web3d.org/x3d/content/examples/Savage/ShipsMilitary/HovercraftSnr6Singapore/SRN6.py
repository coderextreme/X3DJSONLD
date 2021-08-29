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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SRN6.x3d',name='title'),
    meta(content='http://www.hovercraft-museum.org/srn6-tech.html',name='reference'),
    meta(content='1 September 2004',name='created'),
    meta(content='9 November 2015',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/SRN6.x3d',name='identifier'),
    meta(content='Data of metal materials obtained from UniversalMediaMaterials MetalsExamples',name='reference'),
    meta(content='Data of glass materials obtained from UniversalMediaMaterials GlassExamples',name='reference'),
    meta(content='Combines the individual modules of the Hovercraft modules into the complete module by Inline calling.',name='description'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Inline(url=["LowerBody.x3d","LowerBody.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/LowerBody.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/LowerBody.wrl"])]),
    Transform(translation=(0,2.3,0),
      children=[
      Inline(url=["UpperBody.x3d","UpperBody.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/UpperBody.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/UpperBody.wrl"])]),
    Transform(translation=(0,5.2,0)),
    Transform(translation=(0,5.2,-8.2),
      children=[
      Inline(url=["Rotor.x3d","Rotor.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Rotor.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Rotor.wrl"])]),
    Transform(translation=(0,2,-9),
      children=[
      Inline(url=["Fin.x3d","Fin.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Fin.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Fin.wrl"])]),
    Transform(translation=(0,5.5,7),
      children=[
      Inline(url=["Radar.x3d","Radar.wrl","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Radar.x3d","https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Radar.wrl"])]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SRN6.py")
