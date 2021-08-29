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
    meta(content='TropicalExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TropicalExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical00',url=["TropicalPrototypes.x3d#Tropical00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical00","TropicalPrototypes.wrl#Tropical00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical01',url=["TropicalPrototypes.x3d#Tropical01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical01","TropicalPrototypes.wrl#Tropical01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical02',url=["TropicalPrototypes.x3d#Tropical02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical02","TropicalPrototypes.wrl#Tropical02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical03',url=["TropicalPrototypes.x3d#Tropical03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical03","TropicalPrototypes.wrl#Tropical03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical04',url=["TropicalPrototypes.x3d#Tropical04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical04","TropicalPrototypes.wrl#Tropical04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical05',url=["TropicalPrototypes.x3d#Tropical05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical05","TropicalPrototypes.wrl#Tropical05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical06',url=["TropicalPrototypes.x3d#Tropical06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical06","TropicalPrototypes.wrl#Tropical06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical07',url=["TropicalPrototypes.x3d#Tropical07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical07","TropicalPrototypes.wrl#Tropical07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical08',url=["TropicalPrototypes.x3d#Tropical08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical08","TropicalPrototypes.wrl#Tropical08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical09',url=["TropicalPrototypes.x3d#Tropical09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical09","TropicalPrototypes.wrl#Tropical09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical10',url=["TropicalPrototypes.x3d#Tropical10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical10","TropicalPrototypes.wrl#Tropical10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical11',url=["TropicalPrototypes.x3d#Tropical11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical11","TropicalPrototypes.wrl#Tropical11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical12',url=["TropicalPrototypes.x3d#Tropical12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical12","TropicalPrototypes.wrl#Tropical12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical13',url=["TropicalPrototypes.x3d#Tropical13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical13","TropicalPrototypes.wrl#Tropical13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical14',url=["TropicalPrototypes.x3d#Tropical14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical14","TropicalPrototypes.wrl#Tropical14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical15',url=["TropicalPrototypes.x3d#Tropical15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical15","TropicalPrototypes.wrl#Tropical15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical16',url=["TropicalPrototypes.x3d#Tropical16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical16","TropicalPrototypes.wrl#Tropical16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical17',url=["TropicalPrototypes.x3d#Tropical17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical17","TropicalPrototypes.wrl#Tropical17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical18',url=["TropicalPrototypes.x3d#Tropical18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical18","TropicalPrototypes.wrl#Tropical18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical19',url=["TropicalPrototypes.x3d#Tropical19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical19","TropicalPrototypes.wrl#Tropical19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical20',url=["TropicalPrototypes.x3d#Tropical20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical20","TropicalPrototypes.wrl#Tropical20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical21',url=["TropicalPrototypes.x3d#Tropical21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical21","TropicalPrototypes.wrl#Tropical21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical22',url=["TropicalPrototypes.x3d#Tropical22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical22","TropicalPrototypes.wrl#Tropical22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical23',url=["TropicalPrototypes.x3d#Tropical23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical23","TropicalPrototypes.wrl#Tropical23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical24',url=["TropicalPrototypes.x3d#Tropical24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical24","TropicalPrototypes.wrl#Tropical24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical25',url=["TropicalPrototypes.x3d#Tropical25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical25","TropicalPrototypes.wrl#Tropical25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical26',url=["TropicalPrototypes.x3d#Tropical26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical26","TropicalPrototypes.wrl#Tropical26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical27',url=["TropicalPrototypes.x3d#Tropical27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical27","TropicalPrototypes.wrl#Tropical27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical28',url=["TropicalPrototypes.x3d#Tropical28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical28","TropicalPrototypes.wrl#Tropical28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical29',url=["TropicalPrototypes.x3d#Tropical29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical29","TropicalPrototypes.wrl#Tropical29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical30',url=["TropicalPrototypes.x3d#Tropical30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical30","TropicalPrototypes.wrl#Tropical30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical31',url=["TropicalPrototypes.x3d#Tropical31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical31","TropicalPrototypes.wrl#Tropical31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical32',url=["TropicalPrototypes.x3d#Tropical32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical32","TropicalPrototypes.wrl#Tropical32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical33',url=["TropicalPrototypes.x3d#Tropical33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical33","TropicalPrototypes.wrl#Tropical33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical34',url=["TropicalPrototypes.x3d#Tropical34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d#Tropical34","TropicalPrototypes.wrl#Tropical34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.wrl#Tropical34"]),
    Group(bboxSize=(10.5,10.5,2.0),
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Tropical00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Tropical00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical00',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Tropical00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Tropical01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Tropical01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical01',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Tropical02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Tropical02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical02',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Tropical03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Tropical03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical03',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Tropical04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Tropical04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical04',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Tropical05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Tropical05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical05',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Tropical06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Tropical06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical06',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Tropical07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Tropical07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical07',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Tropical08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Tropical08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical08',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Tropical09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Tropical09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical09',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Tropical10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Tropical10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical10',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Tropical11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Tropical11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical11',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Tropical12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Tropical12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical12',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Tropical13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Tropical13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical13',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Tropical14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Tropical14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical14',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Tropical15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Tropical15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical15',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Tropical16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Tropical16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical16',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Tropical17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Tropical17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical17',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Tropical18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Tropical18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical18',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Tropical19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Tropical19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical19',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Tropical20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Tropical20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical20',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Tropical21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Tropical21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical21',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Tropical22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Tropical22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical22',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Tropical23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Tropical23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical23',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Tropical24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Tropical24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical24',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Tropical25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Tropical25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical25',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Tropical26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Tropical26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical26',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Tropical27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Tropical27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical27',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Tropical28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Tropical28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical28',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Tropical29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Tropical29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical29',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Tropical30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Tropical30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical30',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Tropical31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Tropical31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical31',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Tropical32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Tropical32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical32',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Tropical33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Tropical33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical33',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Tropical34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Tropical34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Tropical34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Tropical34',parameter=["target=_source"],url=["TropicalPrototypes.html#ProtoDeclare_Tropical34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.html#ProtoDeclare_Tropical24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Tropical34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TropicalExamples.py")
