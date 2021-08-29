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
    component(level=1,name='DIS'),
    meta(content='SuperCobraEagleDIS.x3d',name='title'),
    meta(content='Simple addition of Distributed Interactive Simulation (DIS) protocol EspduTransform with an inlined model (requires installation of DIS-Java-VRML on local machine). Receives packets sent to Eagle in Capture the Flag demo. Page down to first viewpoint to view moving helicopter.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='Requires DIS ESPDU traffic from an external source for motion.',name='warning'),
    meta(content='http://www.web3d.org/WorkingGroups/vrtp/dis-java-vrml/examples.html',name='reference'),
    meta(content='Cobra VRML X3D DIS DIS-Java-VRML',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraEagleDIS.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    EspduTransform(address='224.2.181.145',entityID=22,marking='Eagle',port=62040,
      #  traceColor="1 0 0" traceOffset="0 -2 0" traceSize="2 2 2" 
      children=[
      Inline(url=["ExampleCamouflageCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/ExampleCamouflageCobra.x3d","ExampleCamouflageCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/ExampleCamouflageCobra.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SuperCobraEagleDIS.py")
