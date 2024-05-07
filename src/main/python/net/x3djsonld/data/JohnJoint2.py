####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python JohnJoint2.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='JohnJoint2.x3d',name='title'),
    meta(name='identifier',content='http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d'),
    meta(name='description',content='An attempt at a standard LOA-4 skeleton'),
    meta(name='generator',content='h2.pl'),
    meta(name='modified',content='14 Jan 2023'),
    meta(content='John Carlson',name='creator'),
    meta(content='9 November 2020',name='created'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      #  DEF for markerfor XYZ axes 
      children=[
      Shape(DEF='AxisLinesShape',
        #  RGB lines showing XYZ axes 
        geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
          coord=Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]),
          color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))]),
    Group(
      #  DEFS for markers of skeleton joints, segments, and sites 
      children=[
      Transform(
        # 
  <Transform translation='0 2 0' scale='1 1 1'>
   <Shape DEF='HAnimRootShape'>
    <Sphere radius='0.02'  />
     <Appearance>
      <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/>
     </Appearance>
    </Shape>
  </Transform>
  
        children=[
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimJointShape',
            geometry=Sphere(radius=0.02),
            appearance=Appearance(
              material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3)))]),
        Transform(translation=(0,2.05,0),
          children=[
          Shape(DEF='HAnimSegmentLine',
            geometry=LineSet(vertexCount=[2],
              color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))])]
        # 
  <Transform translation='0 2.1 0' scale='1 1 1'>
   <Shape DEF='HAnimSiteShape'>
    <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'>
     <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/>
     <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/>
    </IndexedFaceSet>
     <Appearance>
      <Material diffuseColor='1 1 0' transparency='0.3'/>
     </Appearance>
   </Shape>
  </Transform>
  
        )]),
    NavigationInfo(speed=1.5),
    Viewpoint(description='default'),
    HAnimHumanoid(DEF='hanim_HAnim',info=["humanoidVersion=2.0"],name='HAnim',version='2.0',
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',center=(0.0000,0.8240,0.0277),
        children=[
        HAnimJoint(DEF='hanim_sacroiliac',name='sacroiliac',center=(0.0000,0.9149,0.0016),
          children=[
          HAnimJoint(DEF='hanim_l_hip',name='l_hip',center=(0.0961,0.9124,-0.0001),
            children=[
            HAnimJoint(DEF='hanim_l_knee',name='l_knee',center=(0.1040,0.4867,0.0308),
              children=[
              HAnimJoint(DEF='hanim_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),
                children=[
                HAnimJoint(DEF='hanim_l_talocalcaneonavicular',name='l_talocalcaneonavicular',center=(0,1,0),
                  children=[
                  HAnimJoint(DEF='hanim_l_cuneonavicular_1',name='l_cuneonavicular_1',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_1',name='l_tarsometatarsal_1',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_1',name='l_metatarsophalangeal_1',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_interphalangeal_1',name='l_tarsal_interphalangeal_1',center=(0,1,0))])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_2',name='l_cuneonavicular_2',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_2',name='l_tarsometatarsal_2',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_2',name='l_tarsal_proximal_interphalangeal_2',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',name='l_tarsal_distal_interphalangeal_2',center=(0,1,0))])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_3',name='l_cuneonavicular_3',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_3',name='l_tarsometatarsal_3',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_3',name='l_metatarsophalangeal_3',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_3',name='l_tarsal_proximal_interphalangeal_3',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_3',name='l_tarsal_distal_interphalangeal_3',center=(0,1,0))])])])])]),
                HAnimJoint(DEF='hanim_l_calcaneocuboid',name='l_calcaneocuboid',center=(0,1,0),
                  children=[
                  HAnimJoint(DEF='hanim_l_transversetarsal',name='l_transversetarsal',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_4',name='l_tarsometatarsal_4',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_4',name='l_metatarsophalangeal_4',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_4',name='l_tarsal_proximal_interphalangeal_4',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_4',name='l_tarsal_distal_interphalangeal_4',center=(0,1,0))])])]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_5',name='l_tarsometatarsal_5',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_5',name='l_metatarsophalangeal_5',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_5',name='l_tarsal_proximal_interphalangeal_5',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_5',name='l_tarsal_distal_interphalangeal_5',center=(0,1,0))])])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',name='r_hip',center=(-0.0950,0.9171,0.0029),
            children=[
            HAnimJoint(DEF='hanim_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),
              children=[
              HAnimJoint(DEF='hanim_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),
                children=[
                HAnimJoint(DEF='hanim_r_talocalcaneonavicular',name='r_talocalcaneonavicular',center=(0,1,0),
                  children=[
                  HAnimJoint(DEF='hanim_r_cuneonavicular_1',name='r_cuneonavicular_1',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_1',name='r_tarsometatarsal_1',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_1',name='r_metatarsophalangeal_1',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_interphalangeal_1',name='r_tarsal_interphalangeal_1',center=(0,1,0))])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_2',name='r_cuneonavicular_2',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_2',name='r_tarsometatarsal_2',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_2',name='r_tarsal_proximal_interphalangeal_2',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',name='r_tarsal_distal_interphalangeal_2',center=(0,1,0))])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_3',name='r_cuneonavicular_3',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_3',name='r_tarsometatarsal_3',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_3',name='r_metatarsophalangeal_3',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_3',name='r_tarsal_proximal_interphalangeal_3',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_3',name='r_tarsal_distal_interphalangeal_3',center=(0,1,0))])])])])]),
                HAnimJoint(DEF='hanim_r_calcaneocuboid',name='r_calcaneocuboid',center=(0,1,0),
                  children=[
                  HAnimJoint(DEF='hanim_r_transversetarsal',name='r_transversetarsal',center=(0,1,0),
                    children=[
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_4',name='r_tarsometatarsal_4',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_4',name='r_metatarsophalangeal_4',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_4',name='r_tarsal_proximal_interphalangeal_4',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_4',name='r_tarsal_distal_interphalangeal_4',center=(0,1,0))])])]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_5',name='r_tarsometatarsal_5',center=(0,1,0),
                      children=[
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_5',name='r_metatarsophalangeal_5',center=(0,1,0),
                        children=[
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_5',name='r_tarsal_proximal_interphalangeal_5',center=(0,1,0),
                          children=[
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_5',name='r_tarsal_distal_interphalangeal_5',center=(0,1,0))])])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),
          children=[
          HAnimJoint(DEF='hanim_vl4',name='vl4',center=(0.0035,1.0925,-0.0787),
            children=[
            HAnimJoint(DEF='hanim_vl3',name='vl3',center=(0.0041,1.1276,-0.0796),
              children=[
              HAnimJoint(DEF='hanim_vl2',name='vl2',center=(0.0045,1.1546,-0.0800),
                children=[
                HAnimJoint(DEF='hanim_vl1',name='vl1',center=(0.0048,1.1912,-0.0805),
                  children=[
                  HAnimJoint(DEF='hanim_vt12',name='vt12',center=(0.0051,1.2278,-0.0808),
                    children=[
                    HAnimJoint(DEF='hanim_vt11',name='vt11',center=(0.0053,1.2679,-0.0810),
                      children=[
                      HAnimJoint(DEF='hanim_vt10',name='vt10',center=(0.0056,1.2848,-0.0822),
                        children=[
                        HAnimJoint(DEF='hanim_vt9',name='vt9',center=(0.0057,1.3126,-0.0838),
                          children=[
                          HAnimJoint(DEF='hanim_vt8',name='vt8',center=(0.0057,1.3382,-0.0845),
                            children=[
                            HAnimJoint(DEF='hanim_vt7',name='vt7',center=(0.0058,1.3625,-0.0833),
                              children=[
                              HAnimJoint(DEF='hanim_vt6',name='vt6',center=(0.0059,1.3866,-0.0800),
                                children=[
                                HAnimJoint(DEF='hanim_vt5',name='vt5',center=(0.0060,1.4102,-0.0745),
                                  children=[
                                  HAnimJoint(DEF='hanim_vt4',name='vt4',center=(0.0061,1.4320,-0.0675),
                                    children=[
                                    HAnimJoint(DEF='hanim_vt3',name='vt3',center=(0.0062,1.4583,-0.0570),
                                      children=[
                                      HAnimJoint(DEF='hanim_vt2',name='vt2',center=(0.0063,1.4761,-0.0484),
                                        children=[
                                        HAnimJoint(DEF='hanim_vt1',name='vt1',center=(0.0065,1.4951,-0.0387),
                                          children=[
                                          HAnimJoint(DEF='hanim_vc7',name='vc7',center=(0.0066,1.5132,-0.0301),
                                            children=[
                                            HAnimJoint(DEF='hanim_vc6',name='vc6',center=(0.0066,1.5357,-0.0143),
                                              children=[
                                              HAnimJoint(DEF='hanim_vc5',name='vc5',center=(0.0066,1.5520,-0.0082),
                                                children=[
                                                HAnimJoint(DEF='hanim_vc4',name='vc4',center=(0.0066,1.5662,-0.0084),
                                                  children=[
                                                  HAnimJoint(DEF='hanim_vc3',name='vc3',center=(0.0066,1.5800,-0.0103),
                                                    children=[
                                                    HAnimJoint(DEF='hanim_vc2',name='vc2',center=(0.0066,1.5928,-0.0103),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_vc1',name='vc1',center=(0.0066,1.6144,-0.0034),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',name='l_eyelid_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',name='r_eyelid_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',name='l_eyeball_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',name='r_eyeball_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',name='l_eyebrow_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',name='r_eyebrow_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_temporomandibular',name='temporomandibular',center=(0,1,0))])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',name='l_sternoclavicular',center=(0.0820,1.4488,-0.0353),
                                            children=[
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),
                                              children=[
                                              HAnimJoint(DEF='hanim_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),
                                                children=[
                                                HAnimJoint(DEF='hanim_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),
                                                  children=[
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),
                                                    children=[
                                                    HAnimJoint(DEF='hanim_l_midcarpal_1',name='l_midcarpal_1',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464))])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_2',name='l_midcarpal_2',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1983,0.8024,-0.0280),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.0280),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236))])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_3',name='l_midcarpal_3',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0.1987,0.8029,-0.0530),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.0530),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494))])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_4_5',name='l_midcarpal_4_5',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767))])])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017))])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',name='r_sternoclavicular',center=(-0.0694,1.4600,-0.0330),
                                            children=[
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',name='r_acromioclavicular',center=(-0.0836,1.4281,-0.0401),
                                              children=[
                                              HAnimJoint(DEF='hanim_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),
                                                children=[
                                                HAnimJoint(DEF='hanim_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.0620),
                                                  children=[
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),
                                                    children=[
                                                    HAnimJoint(DEF='hanim_r_midcarpal_1',name='r_midcarpal_1',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_1',name='r_carpometacarpal_1',center=(-0.1899,0.8502,-0.0473),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',center=(-0.1874,0.8256,0.0306),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',center=(-0.1864,0.8190,0.0506))])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_2',name='r_midcarpal_2',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_2',name='r_carpometacarpal_2',center=(-0.1961,0.8055,-0.0218),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',center=(-0.1961,0.7846,-0.0218),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',center=(-0.1954,0.7393,-0.0185),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',center=(-0.1945,0.7169,-0.0173))])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_3',name='r_midcarpal_3',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_3',name='r_carpometacarpal_3',center=(-0.1972,0.8060,-0.0468),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',center=(-0.1972,0.7849,-0.0468),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',center=(-0.1950,0.7304,-0.0441),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',center=(-0.1939,0.7042,-0.0432))])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_4_5',name='r_midcarpal_4_5',center=(0,1,0),
                                                      children=[
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_4',name='r_carpometacarpal_4',center=(-0.1951,0.8049,-0.0732),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',center=(-0.1951,0.7845,-0.0732),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',center=(-0.1920,0.7318,-0.0716),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',center=(-0.1908,0.7077,-0.0706))])])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_5',name='r_carpometacarpal_5',center=(-0.1926,0.8096,-0.0975),
                                                        children=[
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',center=(-0.1926,0.7896,-0.0975),
                                                          children=[
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',center=(-0.1902,0.7483,-0.0963),
                                                            children=[
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',center=(-0.1908,0.7540,-0.0960))])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
      joints=[
      HAnimJoint(USE='hanim_humanoid_root'),
      HAnimJoint(USE='hanim_sacroiliac'),
      HAnimJoint(USE='hanim_l_hip'),
      HAnimJoint(USE='hanim_l_knee'),
      HAnimJoint(USE='hanim_l_talocrural'),
      HAnimJoint(USE='hanim_l_talocalcaneonavicular'),
      HAnimJoint(USE='hanim_l_cuneonavicular_1'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_1'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_1'),
      HAnimJoint(USE='hanim_l_tarsal_interphalangeal_1'),
      HAnimJoint(USE='hanim_l_cuneonavicular_2'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_cuneonavicular_3'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_3'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_3'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_calcaneocuboid'),
      HAnimJoint(USE='hanim_l_transversetarsal'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_4'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_4'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_5'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_5'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_5'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_hip'),
      HAnimJoint(USE='hanim_r_knee'),
      HAnimJoint(USE='hanim_r_talocrural'),
      HAnimJoint(USE='hanim_r_talocalcaneonavicular'),
      HAnimJoint(USE='hanim_r_cuneonavicular_1'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_1'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_1'),
      HAnimJoint(USE='hanim_r_tarsal_interphalangeal_1'),
      HAnimJoint(USE='hanim_r_cuneonavicular_2'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_cuneonavicular_3'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_3'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_3'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_calcaneocuboid'),
      HAnimJoint(USE='hanim_r_transversetarsal'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_4'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_5'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_5'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_vl5'),
      HAnimJoint(USE='hanim_vl4'),
      HAnimJoint(USE='hanim_vl3'),
      HAnimJoint(USE='hanim_vl2'),
      HAnimJoint(USE='hanim_vl1'),
      HAnimJoint(USE='hanim_vt12'),
      HAnimJoint(USE='hanim_vt11'),
      HAnimJoint(USE='hanim_vt10'),
      HAnimJoint(USE='hanim_vt9'),
      HAnimJoint(USE='hanim_vt8'),
      HAnimJoint(USE='hanim_vt7'),
      HAnimJoint(USE='hanim_vt6'),
      HAnimJoint(USE='hanim_vt5'),
      HAnimJoint(USE='hanim_vt4'),
      HAnimJoint(USE='hanim_vt3'),
      HAnimJoint(USE='hanim_vt2'),
      HAnimJoint(USE='hanim_vt1'),
      HAnimJoint(USE='hanim_vc7'),
      HAnimJoint(USE='hanim_vc6'),
      HAnimJoint(USE='hanim_vc5'),
      HAnimJoint(USE='hanim_vc4'),
      HAnimJoint(USE='hanim_vc3'),
      HAnimJoint(USE='hanim_vc2'),
      HAnimJoint(USE='hanim_vc1'),
      HAnimJoint(USE='hanim_skullbase'),
      HAnimJoint(USE='hanim_l_eyelid_joint'),
      HAnimJoint(USE='hanim_r_eyelid_joint'),
      HAnimJoint(USE='hanim_l_eyeball_joint'),
      HAnimJoint(USE='hanim_r_eyeball_joint'),
      HAnimJoint(USE='hanim_l_eyebrow_joint'),
      HAnimJoint(USE='hanim_r_eyebrow_joint'),
      HAnimJoint(USE='hanim_temporomandibular'),
      HAnimJoint(USE='hanim_l_sternoclavicular'),
      HAnimJoint(USE='hanim_l_acromioclavicular'),
      HAnimJoint(USE='hanim_l_shoulder'),
      HAnimJoint(USE='hanim_l_elbow'),
      HAnimJoint(USE='hanim_l_radiocarpal'),
      HAnimJoint(USE='hanim_l_midcarpal_1'),
      HAnimJoint(USE='hanim_l_carpometacarpal_1'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1'),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1'),
      HAnimJoint(USE='hanim_l_midcarpal_2'),
      HAnimJoint(USE='hanim_l_carpometacarpal_2'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_midcarpal_3'),
      HAnimJoint(USE='hanim_l_carpometacarpal_3'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_midcarpal_4_5'),
      HAnimJoint(USE='hanim_l_carpometacarpal_4'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_carpometacarpal_5'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_sternoclavicular'),
      HAnimJoint(USE='hanim_r_acromioclavicular'),
      HAnimJoint(USE='hanim_r_shoulder'),
      HAnimJoint(USE='hanim_r_elbow'),
      HAnimJoint(USE='hanim_r_radiocarpal'),
      HAnimJoint(USE='hanim_r_midcarpal_1'),
      HAnimJoint(USE='hanim_r_carpometacarpal_1'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1'),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1'),
      HAnimJoint(USE='hanim_r_midcarpal_2'),
      HAnimJoint(USE='hanim_r_carpometacarpal_2'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_midcarpal_3'),
      HAnimJoint(USE='hanim_r_carpometacarpal_3'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_midcarpal_4_5'),
      HAnimJoint(USE='hanim_r_carpometacarpal_4'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_carpometacarpal_5'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for JohnJoint2.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python JohnJoint2.py load and self-test diagnostics complete.")
